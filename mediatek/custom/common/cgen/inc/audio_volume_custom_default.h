/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2008
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*******************************************************************************
 *
 * Filename:
 * ---------
 * audio_volume_custom_default.h
 *
 * Project:
 * --------
 *   ALPS
 *
 * Description:
 * ------------
 * This file is the header of audio customization related parameters or definition.
 *
 * Author:
 * -------
 * Chipeng chang
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by CC/CQ. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Revision:$
 * $Modtime:$
 * $Log:$
 *
 *
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by CC/CQ. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef AUDIO_VOLUME_CUSTOM_DEFAULT_H
#define AUDIO_VOLUME_CUSTOM_DEFAULT_H

#define AUD_VOLUME_RING \
     0,32,64,96,128,160,192,\
     136, 160, 184, 204, 220, 236, 255,\
     136, 160, 184, 204, 220, 236, 255

#define AUD_VOLUME_KEY \
     108, 132, 156, 180, 204, 228, 252,\
     108, 132, 156, 180, 204, 228, 252,\
     108, 132, 156, 180, 204, 228, 252

#define AUD_VOLUME_MIC \
     64,255,255,148,255,160,160,\
     225, 192, 192, 160, 255, 208, 172,     \
     255, 208, 208, 180, 255, 208, 172
#define AUD_VOLUME_FMR \
     0,43,85,128,171,213,255,\
     20, 52, 84, 116, 148, 184, 220,\
     52, 84, 120, 148, 180, 216, 255

#define AUD_VOLUME_SPH \
     40,52,64,76,88,100,112,\ 
     40,52,64,76,88,100,112,\ 
     40, 52, 64, 76, 88, 100, 112
#define AUD_VOLUME_SID \
     0,0,16,0,0,0,0,\ 
     0,0,32,0,0,0,0,\ 
     0,0,0,0,0,0,0

#define AUD_VOLUME_MEDIA \
     100, 148, 148, 148, 128, 120, 120,\
     0, 116, 144, 168, 192, 220, 244,\
     0, 116, 144, 168, 192, 220, 244

#define AUD_VOLUME_MATV \
     0,43,85,128,171,213,255,\
     88, 116, 144, 172, 200, 228, 255,\
     124, 144, 164, 184, 204, 224, 255

#endif
