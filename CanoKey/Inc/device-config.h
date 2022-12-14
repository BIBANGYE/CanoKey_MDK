/* SPDX-License-Identifier: Apache-2.0 */
#ifndef __DEVICE_CONFIG__H__
#define __DEVICE_CONFIG__H__

#define CANOKEY_STM32L4_VARIANT
enum hw_variant_t {
  CANOKEY_STM32L4_EARLY_ES = 0,
  CANOKEY_STM32L4_USBA_NANO_R2,
  CANOKEY_STM32L4_USBA_NFC_R3,
  CANOKEY_STM32L4_USBC_NFC_R1,
};

#define USB_MAX_EP0_SIZE 64

#endif /* __DEVICE_CONFIG__H__ */
