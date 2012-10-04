/*****************************************************************************\
 * Header:  dsp_control
 * File:    dsp_control.h
 * Author: Mark Beaumont
 * Description: Definitions, types, and prototypes for dsp_control.xc
 *
 * Version: 0v1
 * Build:
 *
 * The copyrights, all other intellectual and industrial
 * property rights are retained by XMOS and/or its licensors.
 * Terms and conditions covering the use of this code can
 * be found in the Xmos End User License Agreement.
 *
 * Copyright XMOS Ltd 2012
 *
 * In the case where this code is a modification of existing code
 * under a separate license, the separate license terms are shown
 * below. The modifications to the code are still covered by the
 * copyright notice above.
 *
\*****************************************************************************/

#ifndef _DSP_CONTROL_H_
#define _DSP_CONTROL_H_

#include "types64bit.h"
#include "common_utils.h"
#include "reverb.h"

/*****************************************************************************/
void dsp_control( // Controls audio stream processing for reverb application using dsp functions
	streaming chanend c_aud_dsp, // Channel connecting to Audio I/O thread (bi-directional)
	streaming chanend c_dsp_eq, // Channel connecting to Equalisation thread (bi-directional)
	streaming chanend c_dsp_gain // Channel connecting to Loudness thread (bi-directional)
);
/*****************************************************************************/

#endif // _DSP_CONTROL_H_
/*****************************************************************************/
// dsp_control.h
