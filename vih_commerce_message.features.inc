<?php
/**
 * @file
 * vih_commerce_message.features.inc
 */

/**
 * Implements hook_default_message_type().
 */
function vih_commerce_message_default_message_type() {
  $items = array();
  $items['commerce_order_created'] = entity_import('message_type', '{
    "name" : "commerce_order_created",
    "description" : "Commerce Order: created",
    "argument_keys" : [],
    "argument" : [],
    "category" : "commerce_order_message",
    "data" : { "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" } },
    "language" : "da",
    "arguments" : null,
    "metatags" : [],
    "rdf_mapping" : []
  }');
  $items['commerce_order_order_confirmation'] = entity_import('message_type', '{
    "name" : "commerce_order_order_confirmation",
    "description" : "Commerce Order: order confirmation",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type_email",
    "data" : { "purge" : { "override" : 1, "enabled" : 1, "quota" : "100", "days" : "30" } },
    "language" : "da",
    "arguments" : null,
    "message_text" : {
      "da" : [
        {
          "value" : "\\u003Cdiv class=\\u0022message-wrapper\\u0022\\u003E\\u003Cdiv class=\\u0022header\\u0022\\u003E\\u003Cdiv class=\\u0022logo\\u0022\\u003E\\u003Ca href=\\u0022[site:url]\\u0022\\u003E[site:site-logo]\\u003C\\/a\\u003E\\u003C\\/div\\u003E\\u003Cdiv class=\\u0022thank-you\\u0022\\u003ETak for din ordre\\u003C\\/div\\u003E\\u003C\\/div\\u003E\\u003Cdiv class=\\u0022body\\u0022\\u003E\\u003Cp class=\\u0022detail\\u0022\\u003EHer er er detaljerne for din tilmelding\\u0026nbsp;\\u003Cspan class=\\u0022order\\u0022\\u003E\\u003Ca href=\\u0022[message:message-commerce-order:view-url]\\u0022\\u003E#[message:field-message-commerce-order:order-id]\\u003C\\/a\\u003E\\u003C\\/span\\u003E, som blev bestilt [message:field-message-commerce-order:created]:\\u003C\\/p\\u003E\\u003Cdiv class=\\u0022view-order-status [message:message-commerce-order:status]\\u0022\\u003E\\u003Ca href=\\u0022[message:field-message-commerce-order:view-url]\\u0022\\u003EVis din ordre\\u003C\\/a\\u003E\\u003C\\/div\\u003E\\u003Cdiv class=\\u0022shipping-wrapper\\u0022\\u003E\\u003Cdiv class=\\u0022ship-to\\u0022\\u003E\\u003Cp class=\\u0022ship-to-title\\u0022\\u003EP\\u00e5 f\\u00f8lgende adresse:\\u003C\\/p\\u003E\\u003Cp class=\\u0022details\\u0022\\u003E[message:field-message-commerce-order:commerce-customer-billing:commerce_customer_address]\\u003C\\/p\\u003E\\u003C\\/div\\u003E\\u003C\\/div\\u003E\\u003Cdiv class=\\u0022order-summary-wrapper\\u0022\\u003E\\u003Cp class=\\u0022items-title\\u0022\\u003EDu har f\\u00f8lgende indhold i din tilmelding:\\u003C\\/p\\u003E!order-summary\\u003C\\/div\\u003E\\u003Cp class=\\u0022question\\u0022\\u003E\\u003Cb\\u003ESp\\u00f8rgsm\\u00e5l om ordren?\\u003C\\/b\\u003E \\u003Ca href=\\u0022[site:mail]\\u0022\\u003EKontakt os\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\u003C\\/div\\u003E\\u003C\\/div\\u003E\\u003Cp\\u003EMed venlig hilsen\\u003C\\/p\\u003E\\u003Cp\\u003EEn venlig e-mailrobot\\u003Cbr \\/\\u003EVejle Idr\\u00e6tsh\\u00f8jskole\\u003C\\/p\\u003E",
          "format" : "full_html",
          "safe_value" : " \\u003Cdiv class=\\u0022message-wrapper\\u0022\\u003E\\u003Cdiv class=\\u0022header\\u0022\\u003E\\u003Cdiv class=\\u0022logo\\u0022\\u003E\\u003Ca href=\\u0022[site:url]\\u0022\\u003E[site:site-logo]\\u003C\\/a\\u003E\\u003C\\/div\\u003E\\u003Cdiv class=\\u0022thank-you\\u0022\\u003ETak for din ordre\\u003C\\/div\\u003E\\u003C\\/div\\u003E\\u003Cdiv class=\\u0022body\\u0022\\u003E\\u003Cp class=\\u0022detail\\u0022\\u003EHer er er detaljerne for din tilmelding\\u00a0\\u003Cspan class=\\u0022order\\u0022\\u003E\\u003Ca href=\\u0022[message:message-commerce-order:view-url]\\u0022\\u003E#[message:field-message-commerce-order:order-id]\\u003C\\/a\\u003E\\u003C\\/span\\u003E, som blev bestilt [message:field-message-commerce-order:created]:\\u003C\\/p\\u003E\\u003Cdiv class=\\u0022view-order-status [message:message-commerce-order:status]\\u0022\\u003E\\u003Ca href=\\u0022[message:field-message-commerce-order:view-url]\\u0022\\u003EVis din ordre\\u003C\\/a\\u003E\\u003C\\/div\\u003E\\u003Cdiv class=\\u0022shipping-wrapper\\u0022\\u003E\\u003Cdiv class=\\u0022ship-to\\u0022\\u003E\\u003Cp class=\\u0022ship-to-title\\u0022\\u003EP\\u00e5 f\\u00f8lgende adresse:\\u003C\\/p\\u003E\\u003Cp class=\\u0022details\\u0022\\u003E[message:field-message-commerce-order:commerce-customer-billing:commerce_customer_address]\\u003C\\/p\\u003E\\u003C\\/div\\u003E\\u003C\\/div\\u003E\\u003Cdiv class=\\u0022order-summary-wrapper\\u0022\\u003E\\u003Cp class=\\u0022items-title\\u0022\\u003EDu har f\\u00f8lgende indhold i din tilmelding:\\u003C\\/p\\u003E!order-summary\\u003C\\/div\\u003E\\u003Cp class=\\u0022question\\u0022\\u003E\\u003Cb\\u003ESp\\u00f8rgsm\\u00e5l om ordren?\\u003C\\/b\\u003E \\u003Ca href=\\u0022[site:mail]\\u0022\\u003EKontakt os\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\u003C\\/div\\u003E\\u003C\\/div\\u003E\\u003Cp\\u003EMed venlig hilsen\\u003C\\/p\\u003E\\u003Cp\\u003EEn venlig e-mailrobot\\u003Cbr \\/\\u003EVejle Idr\\u00e6tsh\\u00f8jskole\\u003C\\/p\\u003E "
        }
      ],
      "en" : [
        {
          "value" : "\\u003Cdiv class=\\u0027message-wrapper\\u0027\\u003E\\r\\n  \\u003Cdiv class=\\u0027header\\u0027\\u003E\\r\\n    \\u003Cdiv class=\\u0027logo\\u0027\\u003E\\u003Ca href=\\u0022[site:url]\\u0022\\u003E[site:site-logo]\\u003C\\/a\\u003E\\u003C\\/div\\u003E\\r\\n    \\u003Cdiv class=\\u0027thank-you\\u0027\\u003EThanks for your order\\u003C\\/div\\u003E\\r\\n  \\u003C\\/div\\u003E\\r\\n\\r\\n  \\u003Cdiv class=\\u0027body\\u0027\\u003E\\r\\n    \\u003Cp class=\\u0027detail\\u0027\\u003E\\r\\n      Here are the details for your order \\u003Cspan class=\\u0027order\\u0027\\u003E\\u003Ca href=\\u0022[message:message-commerce-order:view-url]\\u0022\\u003E#[message:message-commerce-order:order-id]\\u003C\\/a\\u003E\\u003C\\/span\\u003E, placed on [message:message-commerce-order:created]\\r\\n    \\u003C\\/p\\u003E\\r\\n\\r\\n    \\u003Cdiv class=\\u0027view-order-status [message:message-commerce-order:status]\\u0027\\u003E\\u003Ca href=\\u0027[message:message-commerce-order:view-url]\\u0027\\u003EView your order\\u003C\\/a\\u003E\\u003C\\/div\\u003E\\r\\n\\r\\n    \\u003Cdiv class=\\u0027shipping-wrapper\\u0027\\u003E\\r\\n      \\u003Cdiv class=\\u0027ship-to\\u0027\\u003E\\r\\n        \\u003Cp class=\\u0027ship-to-title\\u0027\\u003EShip to\\u003C\\/p\\u003E\\r\\n        \\u003Cp class=\\u0027details\\u0027\\u003E\\r\\n          [message:message-commerce-order:commerce-customer-billing:commerce_customer_address]\\r\\n        \\u003C\\/p\\u003E\\r\\n      \\u003C\\/div\\u003E\\r\\n\\r\\n      \\u003Cdiv class=\\u0027ship-method\\u0027\\u003E\\r\\n        \\u003Cp class=\\u0027ship-method-title\\u0027\\u003E\\u003C\\/p\\u003E\\r\\n        \\u003Cp class=\\u0027express-delivery\\u0027\\u003E\\u003C\\/p\\u003E\\r\\n        \\u003Cp class=\\u0027deatils\\u0027\\u003E\\u003C\\/p\\u003E\\r\\n      \\u003C\\/div\\u003E\\r\\n    \\u003C\\/div\\u003E\\r\\n\\r\\n\\r\\n    \\u003Cdiv class=\\u0027order-summary-wrapper\\u0027\\u003E\\r\\n    \\u003Cp class=\\u0027items-title\\u0027\\u003EItems in your order\\u003C\\/p\\u003E\\r\\n     !order-summary\\r\\n    \\u003C\\/div\\u003E\\r\\n\\r\\n    \\u003Cp class=\\u0027question\\u0027\\u003E\\u003Cb\\u003EOrder questions ?\\u003C\\/b\\u003E \\u003Ca href=\\u0022[site:mail]\\u0022\\u003EContact us\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\r\\n\\r\\n  \\u003C\\/div\\u003E\\r\\n\\u003C\\/div\\u003E\\r\\n",
          "format" : "filtered_html",
          "safe_value" : " \\u003Ca href=\\u0022url]\\u0022\\u003E[site:site-logo]\\u003C\\/a\\u003E\\n    Thanks for your order\\n  \\n\\n  \\n    \\u003Cp class=\\u0022detail\\u0022\\u003E\\n      Here are the details for your order \\u003Ca href=\\u0022view-url]\\u0022\\u003E#[message:message-commerce-order:order-id]\\u003C\\/a\\u003E, placed on [message:message-commerce-order:created]\\n    \\u003C\\/p\\u003E\\n\\n    \\u003Ca href=\\u0022view-url]\\u0022\\u003EView your order\\u003C\\/a\\u003E\\n\\n    \\n      \\n        \\u003Cp class=\\u0022ship-to-title\\u0022\\u003EShip to\\u003C\\/p\\u003E\\n        \\u003Cp class=\\u0022details\\u0022\\u003E\\n          [message:message-commerce-order:commerce-customer-billing:commerce_customer_address]\\n        \\u003C\\/p\\u003E\\n      \\n\\n      \\n        \\u003Cp class=\\u0022ship-method-title\\u0022\\u003E\\u003C\\/p\\u003E\\n        \\u003Cp class=\\u0022express-delivery\\u0022\\u003E\\u003C\\/p\\u003E\\n        \\u003Cp class=\\u0022deatils\\u0022\\u003E\\u003C\\/p\\u003E\\n      \\n    \\n\\n\\n    \\n    \\u003Cp class=\\u0022items-title\\u0022\\u003EItems in your order\\u003C\\/p\\u003E\\n     !order-summary\\n    \\n\\n    \\u003Cp class=\\u0022question\\u0022\\u003E\\u003Cb\\u003EOrder questions ?\\u003C\\/b\\u003E \\u003Ca href=\\u0022mail]\\u0022\\u003EContact us\\u003C\\/a\\u003E\\u003C\\/p\\u003E "
        }
      ],
      "und" : [
        {
          "value" : "\\u003Cdiv class=\\u0027message-wrapper\\u0027\\u003E\\r\\n  \\u003Cdiv class=\\u0027header\\u0027\\u003E\\r\\n    \\u003Cdiv class=\\u0027logo\\u0027\\u003E\\u003Ca href=\\u0022[site:url]\\u0022\\u003E[site:site-logo]\\u003C\\/a\\u003E\\u003C\\/div\\u003E\\r\\n    \\u003Cdiv class=\\u0027thank-you\\u0027\\u003EThanks for your order\\u003C\\/div\\u003E\\r\\n  \\u003C\\/div\\u003E\\r\\n\\r\\n  \\u003Cdiv class=\\u0027body\\u0027\\u003E\\r\\n    \\u003Cp class=\\u0027detail\\u0027\\u003E\\r\\n      Here are the details for your order \\u003Cspan class=\\u0027order\\u0027\\u003E\\u003Ca href=\\u0022[message:message-commerce-order:view-url]\\u0022\\u003E#[message:message-commerce-order:order-id]\\u003C\\/a\\u003E\\u003C\\/span\\u003E, placed on [message:message-commerce-order:created]\\r\\n    \\u003C\\/p\\u003E\\r\\n\\r\\n    \\u003Cdiv class=\\u0027view-order-status [message:message-commerce-order:status]\\u0027\\u003E\\u003Ca href=\\u0027[message:message-commerce-order:view-url]\\u0027\\u003EView your order\\u003C\\/a\\u003E\\u003C\\/div\\u003E\\r\\n\\r\\n    \\u003Cdiv class=\\u0027shipping-wrapper\\u0027\\u003E\\r\\n      \\u003Cdiv class=\\u0027ship-to\\u0027\\u003E\\r\\n        \\u003Cp class=\\u0027ship-to-title\\u0027\\u003EShip to\\u003C\\/p\\u003E\\r\\n        \\u003Cp class=\\u0027details\\u0027\\u003E\\r\\n          [message:message-commerce-order:commerce-customer-billing:commerce_customer_address]\\r\\n        \\u003C\\/p\\u003E\\r\\n      \\u003C\\/div\\u003E\\r\\n\\r\\n      \\u003Cdiv class=\\u0027ship-method\\u0027\\u003E\\r\\n        \\u003Cp class=\\u0027ship-method-title\\u0027\\u003E\\u003C\\/p\\u003E\\r\\n        \\u003Cp class=\\u0027express-delivery\\u0027\\u003E\\u003C\\/p\\u003E\\r\\n        \\u003Cp class=\\u0027deatils\\u0027\\u003E\\u003C\\/p\\u003E\\r\\n      \\u003C\\/div\\u003E\\r\\n    \\u003C\\/div\\u003E\\r\\n\\r\\n\\r\\n    \\u003Cdiv class=\\u0027order-summary-wrapper\\u0027\\u003E\\r\\n    \\u003Cp class=\\u0027items-title\\u0027\\u003EItems in your order\\u003C\\/p\\u003E\\r\\n     !order-summary\\r\\n    \\u003C\\/div\\u003E\\r\\n\\r\\n    \\u003Cp class=\\u0027question\\u0027\\u003E\\u003Cb\\u003EOrder questions ?\\u003C\\/b\\u003E \\u003Ca href=\\u0022[site:mail]\\u0022\\u003EContact us\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\r\\n\\r\\n  \\u003C\\/div\\u003E\\r\\n\\u003C\\/div\\u003E\\r\\n",
          "format" : "filtered_html",
          "safe_value" : " \\u003Ca href=\\u0022url]\\u0022\\u003E[site:site-logo]\\u003C\\/a\\u003E\\n    Thanks for your order\\n  \\n\\n  \\n    \\u003Cp class=\\u0022detail\\u0022\\u003E\\n      Here are the details for your order \\u003Ca href=\\u0022view-url]\\u0022\\u003E#[message:message-commerce-order:order-id]\\u003C\\/a\\u003E, placed on [message:message-commerce-order:created]\\n    \\u003C\\/p\\u003E\\n\\n    \\u003Ca href=\\u0022view-url]\\u0022\\u003EView your order\\u003C\\/a\\u003E\\n\\n    \\n      \\n        \\u003Cp class=\\u0022ship-to-title\\u0022\\u003EShip to\\u003C\\/p\\u003E\\n        \\u003Cp class=\\u0022details\\u0022\\u003E\\n          [message:message-commerce-order:commerce-customer-billing:commerce_customer_address]\\n        \\u003C\\/p\\u003E\\n      \\n\\n      \\n        \\u003Cp class=\\u0022ship-method-title\\u0022\\u003E\\u003C\\/p\\u003E\\n        \\u003Cp class=\\u0022express-delivery\\u0022\\u003E\\u003C\\/p\\u003E\\n        \\u003Cp class=\\u0022deatils\\u0022\\u003E\\u003C\\/p\\u003E\\n      \\n    \\n\\n\\n    \\n    \\u003Cp class=\\u0022items-title\\u0022\\u003EItems in your order\\u003C\\/p\\u003E\\n     !order-summary\\n    \\n\\n    \\u003Cp class=\\u0022question\\u0022\\u003E\\u003Cb\\u003EOrder questions ?\\u003C\\/b\\u003E \\u003Ca href=\\u0022mail]\\u0022\\u003EContact us\\u003C\\/a\\u003E\\u003C\\/p\\u003E "
        }
      ]
    },
    "message_text_subject" : {
      "da" : [
        {
          "value" : "Ordre [message:field-message-commerce-order:order-number] hos [site:name]",
          "format" : null,
          "safe_value" : "Ordre [message:field-message-commerce-order:order-number] hos [site:name]"
        }
      ],
      "en" : [
        {
          "value" : "Order [message:message-commerce-order:order-number] at [site:name]",
          "format" : null,
          "safe_value" : "Order [message:message-commerce-order:order-number] at [site:name]"
        }
      ],
      "und" : [
        {
          "value" : "Order [message:message-commerce-order:order-number] at [site:name]",
          "format" : null,
          "safe_value" : "Order [message:message-commerce-order:order-number] at [site:name]"
        }
      ]
    },
    "metatags" : [],
    "rdf_mapping" : []
  }');
  return $items;
}
