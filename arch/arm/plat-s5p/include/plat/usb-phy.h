/*
 * Copyright (C) 2011 Samsung Electronics Co.Ltd
 * Author: Joonyoung Shim <jy0922.shim@samsung.com>
 *
 * This program is free software; you can redistribute  it and/or modify it
 * under  the terms of  the GNU General  Public License as published by the
 * Free Software Foundation;  either version 2 of the  License, or (at your
 * option) any later version.
 */

#ifndef __PLAT_S5P_USB_PHY_H
#define __PLAT_S5P_USB_PHY_H

enum s5p_usb_phy_type {
	S5P_USB_PHY_DEVICE,
	S5P_USB_PHY_HOST,
};

extern int s5p_usb_phy_init(struct platform_device *pdev, int type);
extern int s5p_usb_phy_exit(struct platform_device *pdev, int type);
extern void s5p_usb_host_port_status(int is_connected);
extern int check_usbhost_op(void);

#endif /* __PLAT_S5P_REGS_USB_PHY_H */
