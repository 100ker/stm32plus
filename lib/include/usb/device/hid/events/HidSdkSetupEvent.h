/*
 * This file is a part of the open source stm32plus library.
 * Copyright (c) 2011,2012,2013,2014 Andy Brown <www.andybrown.me.uk>
 * Please see website for licensing terms.
 */

#pragma once


namespace stm32plus {
  namespace usb {

    /*
     * Event class for the class setup event
     */

    struct HidSdkSetupEvent : UsbEventDescriptor {

      USBD_StatusTypeDef status;
      USBD_SetupReqTypedef& request;

      HidSdkSetupEvent(USBD_SetupReqTypedef& req)
        : UsbEventDescriptor(EventType::HID_SETUP),
          status(USBD_OK),
          request(req) {
      }
    };
  }
}
