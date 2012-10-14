<?php
/**
 * @file
 * vih_commerce_message.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function vih_commerce_message_default_rules_configuration() {
  $items = array();
  $items['rules_vih_order_confirmation'] = entity_import('rules_config', '{ "rules_vih_order_confirmation" : {
      "LABEL" : "VIH Order Confirmation",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "3",
      "TAGS" : [ "VIH" ],
      "REQUIRES" : [ "rules", "message_notify", "commerce_checkout" ],
      "ON" : [ "commerce_checkout_complete" ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "message",
              "param_type" : "commerce_order_order_confirmation",
              "param_user" : [ "commerce-order:owner" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:message-commerce-order" ],
            "value" : [ "commerce-order" ]
          }
        },
        { "entity_save" : { "data" : [ "entity-created" ], "immediate" : 1 } },
        { "message_notify_process" : { "message" : [ "entity-created" ] } }
      ]
    }
  }');
  return $items;
}
