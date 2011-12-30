//-----------------------------------------------------------------------------
//
//	MONOGRAM GraphStudio
//
//	Author : Igor Janos
//
//-----------------------------------------------------------------------------
#include "stdafx.h"

namespace GraphStudio
{

#define	KNOWN(x)			{ x, _T( # x ) }
	struct GuidPair {
		GUID	guid; 
		LPCTSTR	name;
	};

	const GuidPair	KnownGuidList[] = 
	{
		// filters
		KNOWN(CLSID_AsyncReader),
		KNOWN(GUID_NULL),

		// Media Types
		KNOWN(MEDIATYPE_AnalogAudio),
		KNOWN(MEDIATYPE_AnalogVideo),
		KNOWN(MEDIATYPE_Audio),
		KNOWN(MEDIATYPE_AUXLine21Data),
		KNOWN(MEDIATYPE_DTVCCData),
		KNOWN(MEDIATYPE_DVD_ENCRYPTED_PACK),
		KNOWN(MEDIATYPE_DVD_NAVIGATION),
		KNOWN(MEDIATYPE_File),
		KNOWN(MEDIATYPE_Interleaved),
		KNOWN(MEDIATYPE_LMRT),
		KNOWN(MEDIATYPE_Midi),
		KNOWN(MEDIATYPE_MPEG1SystemStream),
		KNOWN(MEDIATYPE_MPEG2_PACK),
		KNOWN(MEDIATYPE_MPEG2_PES),
        KNOWN(MEDIATYPE_MPEG2_SECTIONS),
		KNOWN(MEDIATYPE_MSTVCaption),
		KNOWN(MEDIATYPE_NULL),
		KNOWN(MEDIATYPE_ScriptCommand),
		KNOWN(MEDIATYPE_Stream),
		KNOWN(MEDIATYPE_Text),
		KNOWN(MEDIATYPE_Timecode),
		KNOWN(MEDIATYPE_URL_STREAM),
		KNOWN(MEDIATYPE_VBI),
		KNOWN(MEDIATYPE_Video),

        // Stream Subtypes
        KNOWN(MEDIASUBTYPE_AIFF),
        KNOWN(MEDIASUBTYPE_Asf),
        KNOWN(MEDIASUBTYPE_Avi),
        KNOWN(MEDIASUBTYPE_AU),
        KNOWN(MEDIASUBTYPE_DssAudio),
		KNOWN(MEDIASUBTYPE_DssVideo),
        KNOWN(MEDIASUBTYPE_MPEG1Audio),
        KNOWN(MEDIASUBTYPE_MPEG1System),
        KNOWN(MEDIASUBTYPE_MPEG1Video),
        KNOWN(MEDIASUBTYPE_MPEG1VideoCD),
        KNOWN(MEDIASUBTYPE_WAVE),

        // VBI Media Types
        KNOWN(KSDATAFORMAT_SUBTYPE_RAW8),
        KNOWN(MEDIASUBTYPE_TELETEXT),
        KNOWN(MEDIASUBTYPE_VPS),
        KNOWN(MEDIASUBTYPE_WSS),

        // Video Subtypes (Analog)
        KNOWN(MEDIASUBTYPE_AnalogVideo_NTSC_M),
		KNOWN(MEDIASUBTYPE_AnalogVideo_PAL_B),
		KNOWN(MEDIASUBTYPE_AnalogVideo_PAL_D),
		KNOWN(MEDIASUBTYPE_AnalogVideo_PAL_G),
		KNOWN(MEDIASUBTYPE_AnalogVideo_PAL_H),
		KNOWN(MEDIASUBTYPE_AnalogVideo_PAL_I),
		KNOWN(MEDIASUBTYPE_AnalogVideo_PAL_M),
		KNOWN(MEDIASUBTYPE_AnalogVideo_PAL_N),
		KNOWN(MEDIASUBTYPE_AnalogVideo_PAL_N_COMBO),
		KNOWN(MEDIASUBTYPE_AnalogVideo_SECAM_B),
		KNOWN(MEDIASUBTYPE_AnalogVideo_SECAM_D),
		KNOWN(MEDIASUBTYPE_AnalogVideo_SECAM_G),
		KNOWN(MEDIASUBTYPE_AnalogVideo_SECAM_H),
		KNOWN(MEDIASUBTYPE_AnalogVideo_SECAM_K),
		KNOWN(MEDIASUBTYPE_AnalogVideo_SECAM_K1),
		KNOWN(MEDIASUBTYPE_AnalogVideo_SECAM_L),

        // Video Subtypes (DXVA)
        KNOWN(MEDIASUBTYPE_AI44),
        KNOWN(MEDIASUBTYPE_IA44),

        // Video Subtypes (DV)
        KNOWN(MEDIASUBTYPE_dvsl),
        KNOWN(MEDIASUBTYPE_dvsd),
        KNOWN(MEDIASUBTYPE_DVSD),
        KNOWN(MEDIASUBTYPE_dvhd),
        KNOWN(MEDIASUBTYPE_MDVF),
        KNOWN(MEDIASUBTYPE_dv25),
		KNOWN(MEDIASUBTYPE_dv50),
		KNOWN(MEDIASUBTYPE_DVCS),

        // Video Subtypes (h264)
        KNOWN(MEDIASUBTYPE_AVC1),
        KNOWN(MEDIASUBTYPE_H264),
        KNOWN(MEDIASUBTYPE_h264),
        KNOWN(MEDIASUBTYPE_X264),
        KNOWN(MEDIASUBTYPE_x264),

        // Video Subtypes (Uncompressd RGB)
        KNOWN(MEDIASUBTYPE_RGB1),
        KNOWN(MEDIASUBTYPE_RGB4),
        KNOWN(MEDIASUBTYPE_RGB8),
        KNOWN(MEDIASUBTYPE_RGB555),
        KNOWN(MEDIASUBTYPE_RGB565),
        KNOWN(MEDIASUBTYPE_RGB24),
		KNOWN(MEDIASUBTYPE_RGB32),
        KNOWN(MEDIASUBTYPE_ARGB1555),
        KNOWN(MEDIASUBTYPE_ARGB1555_D3D_DX7_RT),
		KNOWN(MEDIASUBTYPE_ARGB1555_D3D_DX9_RT),
        KNOWN(MEDIASUBTYPE_ARGB32),
        KNOWN(MEDIASUBTYPE_ARGB32_D3D_DX7_RT),
		KNOWN(MEDIASUBTYPE_ARGB32_D3D_DX9_RT),
		KNOWN(MEDIASUBTYPE_ARGB4444),
		KNOWN(MEDIASUBTYPE_ARGB4444_D3D_DX7_RT),
		KNOWN(MEDIASUBTYPE_ARGB4444_D3D_DX9_RT),
        KNOWN(MEDIASUBTYPE_A2B10G10R10),
		KNOWN(MEDIASUBTYPE_A2R10G10B10),

        // Video Subtypes (YUV)
        KNOWN(MEDIASUBTYPE_AYUV),
        KNOWN(MEDIASUBTYPE_YUY2),
        KNOWN(MEDIASUBTYPE_UYVY),
        KNOWN(MEDIASUBTYPE_IMC1),
		KNOWN(MEDIASUBTYPE_IMC2),
		KNOWN(MEDIASUBTYPE_IMC3),
		KNOWN(MEDIASUBTYPE_IMC4),
        KNOWN(MEDIASUBTYPE_YV12),
        KNOWN(MEDIASUBTYPE_NV12),
		KNOWN(MEDIASUBTYPE_NV24),
        KNOWN(MEDIASUBTYPE_I420),
        KNOWN(MEDIASUBTYPE_IF09),
        KNOWN(MEDIASUBTYPE_IYUV),
        KNOWN(MEDIASUBTYPE_Y211),
		KNOWN(MEDIASUBTYPE_Y411),
		KNOWN(MEDIASUBTYPE_Y41P),
        KNOWN(MEDIASUBTYPE_YUYV),
		KNOWN(MEDIASUBTYPE_YVU9),
		KNOWN(MEDIASUBTYPE_YVYU),

        // Video Subtypes (MJPEG)
        KNOWN(MEDIASUBTYPE_MJPG),
        KNOWN(MEDIASUBTYPE_IJPG),
        KNOWN(MEDIASUBTYPE_CFCC),
        KNOWN(MEDIASUBTYPE_Plum),
        KNOWN(MEDIASUBTYPE_TVMJ),

        // Video Subtypes QT
        KNOWN(MEDIASUBTYPE_QTJpeg),
		KNOWN(MEDIASUBTYPE_QTMovie),
		KNOWN(MEDIASUBTYPE_QTRle),
		KNOWN(MEDIASUBTYPE_QTRpza),
		KNOWN(MEDIASUBTYPE_QTSmc),

		// Video SubTypes (misc.)
		KNOWN(MEDIASUBTYPE_CLJR),
		KNOWN(MEDIASUBTYPE_CLPL),
		KNOWN(MEDIASUBTYPE_CPLA),
        KNOWN(MEDIASUBTYPE_Overlay),
        KNOWN(MEDIASUBTYPE_VPVBI),
		KNOWN(MEDIASUBTYPE_VPVideo),

        // Audio Subtypes
        KNOWN(MEDIASUBTYPE_IEEE_FLOAT),
        KNOWN(MEDIASUBTYPE_PCM),
        KNOWN(MEDIASUBTYPE_MPEG_ADTS_AAC),
        KNOWN(MEDIASUBTYPE_MPEG_HEAAC),
        KNOWN(MEDIASUBTYPE_MPEG_LOAS),
        KNOWN(MEDIASUBTYPE_RAW_AAC1),
        KNOWN(MEDIASUBTYPE_DOLBY_DDPLUS),
        KNOWN(MEDIASUBTYPE_DOLBY_AC3),
		KNOWN(MEDIASUBTYPE_DOLBY_AC3_SPDIF),
        KNOWN(MEDIASUBTYPE_DVM),
        KNOWN(MEDIASUBTYPE_RAW_SPORT),
        KNOWN(MEDIASUBTYPE_SPDIF_TAG_241h),
		KNOWN(MEDIASUBTYPE_DRM_Audio),
		KNOWN(MEDIASUBTYPE_DTS),
        KNOWN(MEDIASUBTYPE_DTS2),
		
        // Mpeg Subtypes
		KNOWN(MEDIASUBTYPE_MPEG1AudioPayload),
		KNOWN(MEDIASUBTYPE_MPEG1Packet),
		KNOWN(MEDIASUBTYPE_MPEG1Payload),
		KNOWN(MEDIASUBTYPE_MPEG2_AUDIO),
		KNOWN(MEDIASUBTYPE_MPEG2_PROGRAM),
		KNOWN(MEDIASUBTYPE_MPEG2_TRANSPORT),
		KNOWN(MEDIASUBTYPE_MPEG2_TRANSPORT_STRIDE),
		KNOWN(MEDIASUBTYPE_MPEG2_UDCR_TRANSPORT),
		KNOWN(MEDIASUBTYPE_MPEG2_VIDEO),
		KNOWN(MEDIASUBTYPE_MPEG2_WMDRM_TRANSPORT),
        KNOWN(MEDIASUBTYPE_DVD_LPCM_AUDIO),
		KNOWN(MEDIASUBTYPE_DVD_NAVIGATION_DSI),
		KNOWN(MEDIASUBTYPE_DVD_NAVIGATION_PCI),
		KNOWN(MEDIASUBTYPE_DVD_NAVIGATION_PROVIDER),
		KNOWN(MEDIASUBTYPE_DVD_SUBPICTURE),

        KNOWN(MEDIASUBTYPE_Line21_BytePair),
		KNOWN(MEDIASUBTYPE_Line21_GOPPacket),
		KNOWN(MEDIASUBTYPE_Line21_VBIRawData),
	
		// Formats
		KNOWN(FORMAT_525WSS),
		KNOWN(FORMAT_AnalogVideo),
		KNOWN(FORMAT_DolbyAC3),
		KNOWN(FORMAT_DVD_LPCMAudio),
		KNOWN(FORMAT_DvInfo),
		KNOWN(FORMAT_MPEG2_VIDEO),
		KNOWN(FORMAT_MPEG2Audio),
		KNOWN(FORMAT_MPEG2Video),
		KNOWN(FORMAT_MPEGStreams),
		KNOWN(FORMAT_MPEGVideo),
		KNOWN(FORMAT_None),
		KNOWN(FORMAT_VideoInfo),
		KNOWN(FORMAT_VIDEOINFO2),
		KNOWN(FORMAT_VideoInfo2),
		KNOWN(FORMAT_WaveFormatEx),

		// Wave formats
		KNOWN(KSDATAFORMAT_SUBTYPE_PCM),
		KNOWN(KSDATAFORMAT_SUBTYPE_IEEE_FLOAT),
		KNOWN(KSDATAFORMAT_SUBTYPE_DRM),
		KNOWN(KSDATAFORMAT_SUBTYPE_ALAW),
		KNOWN(KSDATAFORMAT_SUBTYPE_MULAW),
		KNOWN(KSDATAFORMAT_SUBTYPE_ADPCM),

        // misc.
        KNOWN(MEDIASUBTYPE_DtvCcData),
		KNOWN(MEDIASUBTYPE_S340),
		KNOWN(MEDIASUBTYPE_S342),
		KNOWN(MEDIASUBTYPE_SDDS),
		KNOWN(MEDIASUBTYPE_dvh1),
		KNOWN(MEDIASUBTYPE_IF09),

        KNOWN(MEDIASUBTYPE_None),
		KNOWN(MEDIASUBTYPE_NULL),

        // From WMCodecdsp.h
        KNOWN(MEDIASUBTYPE_V216),
        KNOWN(MEDIASUBTYPE_V410),
        KNOWN(MEDIASUBTYPE_v210),
        KNOWN(MEDIASUBTYPE_I420),
        KNOWN(MEDIASUBTYPE_WVC1),
        KNOWN(MEDIASUBTYPE_wvc1),
        KNOWN(MEDIASUBTYPE_WMVA),
        KNOWN(MEDIASUBTYPE_wmva),
        KNOWN(MEDIASUBTYPE_WMVB),
        KNOWN(MEDIASUBTYPE_wmvb),
        KNOWN(MEDIASUBTYPE_WMVR),
        KNOWN(MEDIASUBTYPE_wmvr),
        KNOWN(MEDIASUBTYPE_WMVP),
        KNOWN(MEDIASUBTYPE_wmvp),
        KNOWN(MEDIASUBTYPE_WVP2),
        KNOWN(MEDIASUBTYPE_wvp2),
        KNOWN(MEDIASUBTYPE_WMV3),
        KNOWN(MEDIASUBTYPE_wmv3),
        KNOWN(MEDIASUBTYPE_WMV2),
        KNOWN(MEDIASUBTYPE_wmv2),
        KNOWN(MEDIASUBTYPE_WMV1),
        KNOWN(MEDIASUBTYPE_wmv1),
        KNOWN(MEDIASUBTYPE_MPG4),
        KNOWN(MEDIASUBTYPE_mpg4),
        KNOWN(MEDIASUBTYPE_MP42),
        KNOWN(MEDIASUBTYPE_mp42),
        KNOWN(MEDIASUBTYPE_MP43),
        KNOWN(MEDIASUBTYPE_mp43),
        KNOWN(MEDIASUBTYPE_MP4S),
        KNOWN(MEDIASUBTYPE_mp4s),
        KNOWN(MEDIASUBTYPE_M4S2),
        KNOWN(MEDIASUBTYPE_m4s2),
        KNOWN(MEDIASUBTYPE_MSS1),
        KNOWN(MEDIASUBTYPE_MSS2),
        KNOWN(MEDIASUBTYPE_MSAUDIO1),
        KNOWN(MEDIASUBTYPE_WMAUDIO2),
        KNOWN(MEDIASUBTYPE_WMAUDIO3),
        KNOWN(MEDIASUBTYPE_WMAUDIO_LOSSLESS),
        KNOWN(MEDIASUBTYPE_WMASPDIF),
        KNOWN(MEDIASUBTYPE_WMAUDIO4),
        KNOWN(MEDIASUBTYPE_MPEG_ADTS_AAC),
        KNOWN(MEDIASUBTYPE_MPEG_RAW_AAC),
        KNOWN(MEDIASUBTYPE_MPEG_LOAS),
        KNOWN(MEDIASUBTYPE_NOKIA_MPEG_ADTS_AAC),
        KNOWN(MEDIASUBTYPE_NOKIA_MPEG_RAW_AAC),
        KNOWN(MEDIASUBTYPE_VODAFONE_MPEG_ADTS_AAC),
        KNOWN(MEDIASUBTYPE_VODAFONE_MPEG_RAW_AAC),
        KNOWN(MEDIASUBTYPE_MPEG_HEAAC),
        KNOWN(MEDIASUBTYPE_RAW_AAC1),
        KNOWN(MEDIASUBTYPE_DVM),
        KNOWN(MEDIASUBTYPE_DTS2),
        KNOWN(MEDIASUBTYPE_DOLBY_DDPLUS),
        KNOWN(MEDIASUBTYPE_DOLBY_TRUEHD),
        KNOWN(MEDIASUBTYPE_DTS_HD),
        KNOWN(MEDIASUBTYPE_h264),
        KNOWN(MEDIASUBTYPE_AVC1),
        KNOWN(MEDIASUBTYPE_X264),
        KNOWN(MEDIASUBTYPE_x264),

        // Moreuuids.h
        KNOWN(MEDIASUBTYPE_WAVE_DOLBY_AC3),
        KNOWN(MEDIASUBTYPE_LATM_AAC),
        KNOWN(MEDIASUBTYPE_MP4A),
        KNOWN(MEDIASUBTYPE_mp4a),
        KNOWN(MEDIASUBTYPE_MP3),
        KNOWN(MEDIASUBTYPE_FLAC),
        KNOWN(MEDIASUBTYPE_FLAC_FRAMED),
        KNOWN(MEDIASUBTYPE_TTA1),
        KNOWN(MEDIASUBTYPE_WAVPACK4),
        KNOWN(MEDIASUBTYPE_AMR),
        KNOWN(MEDIASUBTYPE_SAMR),
        KNOWN(MEDIASUBTYPE_VP80),
        KNOWN(MEDIASUBTYPE_IMA4),
        KNOWN(MEDIASUBTYPE_SAWB),
        KNOWN(MEDIASUBTYPE_SVCD_SUBPICTURE),
        KNOWN(MEDIASUBTYPE_CVD_SUBPICTURE),
        KNOWN(MEDIASUBTYPE_MPEG2_PVA),
        KNOWN(MEDIASUBTYPE_DirectShowMedia),
        KNOWN(MEDIASUBTYPE_Dirac),
        KNOWN(MEDIASUBTYPE_DiracVideo),
        KNOWN(FORMAT_DiracVideoInfo),
        KNOWN(MEDIASUBTYPE_MP4),
        KNOWN(MEDIASUBTYPE_FLV),
        KNOWN(MEDIASUBTYPE_FLV1),
        KNOWN(MEDIASUBTYPE_flv1),
        KNOWN(MEDIASUBTYPE_FLV4),
        KNOWN(MEDIASUBTYPE_flv4),
        KNOWN(MEDIASUBTYPE_VP50),
        KNOWN(MEDIASUBTYPE_vp50),
        KNOWN(MEDIASUBTYPE_VP60),
        KNOWN(MEDIASUBTYPE_vp60),
        KNOWN(MEDIASUBTYPE_VP61),
        KNOWN(MEDIASUBTYPE_vp61),
        KNOWN(MEDIASUBTYPE_VP62),
        KNOWN(MEDIASUBTYPE_vp62),
        KNOWN(MEDIASUBTYPE_VP6A),
        KNOWN(MEDIASUBTYPE_vp6a),
        KNOWN(MEDIASUBTYPE_VP6F),
        KNOWN(MEDIASUBTYPE_vp6f),
        KNOWN(MEDIASUBTYPE_RealMedia),
        KNOWN(MEDIASUBTYPE_RV10),
        KNOWN(MEDIASUBTYPE_RV20),
        KNOWN(MEDIASUBTYPE_RV30),
        KNOWN(MEDIASUBTYPE_RV40),
        KNOWN(MEDIASUBTYPE_RV41),
        KNOWN(MEDIASUBTYPE_14_4),
        KNOWN(MEDIASUBTYPE_28_8),
        KNOWN(MEDIASUBTYPE_ATRC),
        KNOWN(MEDIASUBTYPE_COOK),
        KNOWN(MEDIASUBTYPE_DNET),
        KNOWN(MEDIASUBTYPE_SIPR),
        KNOWN(MEDIASUBTYPE_RAAC),
        KNOWN(MEDIASUBTYPE_RACP),
        KNOWN(MEDIASUBTYPE_PCM_NONE),
        KNOWN(MEDIASUBTYPE_PCM_RAW),
        KNOWN(MEDIASUBTYPE_PCM_TWOS),
        KNOWN(MEDIASUBTYPE_PCM_SOWT),
        KNOWN(MEDIASUBTYPE_PCM_IN24),
        KNOWN(MEDIASUBTYPE_PCM_IN32),
        KNOWN(MEDIASUBTYPE_PCM_FL32),
        KNOWN(MEDIASUBTYPE_PCM_FL64),
        KNOWN(MEDIASUBTYPE_PCM_IN24_le),
        KNOWN(MEDIASUBTYPE_PCM_IN32_le),
        KNOWN(MEDIASUBTYPE_PCM_FL32_le),
        KNOWN(MEDIASUBTYPE_PCM_FL64_le),
        KNOWN(MEDIASUBTYPE_PS2_PCM),
        KNOWN(MEDIASUBTYPE_PS2_ADPCM),
        KNOWN(MEDIASUBTYPE_PS2_SUB),
        KNOWN(MEDIASUBTYPE_Ogg),
        KNOWN(MEDIASUBTYPE_Vorbis),
        KNOWN(FORMAT_VorbisFormat),
        KNOWN(MEDIASUBTYPE_Vorbis2),
        KNOWN(FORMAT_VorbisFormat2),
        KNOWN(MEDIASUBTYPE_Matroska),
        KNOWN(MEDIATYPE_Subtitle),
        KNOWN(MEDIASUBTYPE_UTF8),
        KNOWN(MEDIASUBTYPE_SSA),
        KNOWN(MEDIASUBTYPE_ASS),
        KNOWN(MEDIASUBTYPE_ASS2),
        KNOWN(MEDIASUBTYPE_SSF),
        KNOWN(MEDIASUBTYPE_USF),
        KNOWN(MEDIASUBTYPE_VOBSUB),
        KNOWN(FORMAT_SubtitleInfo),
        KNOWN(MEDIASUBTYPE_HDMVSUB),
        KNOWN(MEDIASUBTYPE_ArcsoftH264),
        KNOWN(MEDIASUBTYPE_VSSH),
        KNOWN(MEDIASUBTYPE_vssh),
        KNOWN(MEDIASUBTYPE_DAVC),
        KNOWN(MEDIASUBTYPE_davc),
        KNOWN(MEDIASUBTYPE_PAVC),
        KNOWN(MEDIASUBTYPE_pavc),
        KNOWN(MEDIASUBTYPE_avc1),
        KNOWN(MEDIASUBTYPE_CCV1),
        KNOWN(MEDIASUBTYPE_H264_bis),
        KNOWN(MEDIASUBTYPE_SVQ3),
        KNOWN(MEDIASUBTYPE_XVID),
        KNOWN(MEDIASUBTYPE_xvid),
        KNOWN(MEDIASUBTYPE_DX50),
        KNOWN(MEDIASUBTYPE_dx50),
        KNOWN(MEDIASUBTYPE_DIVX),
        KNOWN(MEDIASUBTYPE_divx),
        KNOWN(MEDIASUBTYPE_MP4V),
        KNOWN(MEDIASUBTYPE_mp4v),
        KNOWN(MEDIASUBTYPE_3IV1),
        KNOWN(MEDIASUBTYPE_3iv1),
        KNOWN(MEDIASUBTYPE_3IV2),
        KNOWN(MEDIASUBTYPE_3iv2),
        KNOWN(MEDIASUBTYPE_3IVX),
        KNOWN(MEDIASUBTYPE_3ivx),
        KNOWN(MEDIASUBTYPE_BLZ0),
        KNOWN(MEDIASUBTYPE_blz0),
        KNOWN(MEDIASUBTYPE_DM4V),
        KNOWN(MEDIASUBTYPE_dm4v),
        KNOWN(MEDIASUBTYPE_DXGM),
        KNOWN(MEDIASUBTYPE_dxgm),
        KNOWN(MEDIASUBTYPE_FFDS),
        KNOWN(MEDIASUBTYPE_ffds),
        KNOWN(MEDIASUBTYPE_FVFW),
        KNOWN(MEDIASUBTYPE_fvfw),
        KNOWN(MEDIASUBTYPE_FMP4),
        KNOWN(MEDIASUBTYPE_fmp4),
        KNOWN(MEDIASUBTYPE_HDX4),
        KNOWN(MEDIASUBTYPE_hdx4),
        KNOWN(MEDIASUBTYPE_LMP4),
        KNOWN(MEDIASUBTYPE_lmp4),
        KNOWN(MEDIASUBTYPE_NDIG),
        KNOWN(MEDIASUBTYPE_ndig),
        KNOWN(MEDIASUBTYPE_RMP4),
        KNOWN(MEDIASUBTYPE_rmp4),
        KNOWN(MEDIASUBTYPE_SMP4),
        KNOWN(MEDIASUBTYPE_smp4),
        KNOWN(MEDIASUBTYPE_SEDG),
        KNOWN(MEDIASUBTYPE_sedg),
        KNOWN(MEDIASUBTYPE_UMP4),
        KNOWN(MEDIASUBTYPE_ump4),
        KNOWN(MEDIASUBTYPE_WV1F),
        KNOWN(MEDIASUBTYPE_wv1f),
        KNOWN(MEDIASUBTYPE_XVIX),
        KNOWN(MEDIASUBTYPE_xvix),
        KNOWN(MEDIASUBTYPE_SVQ1),
        KNOWN(MEDIASUBTYPE_H263),
        KNOWN(MEDIASUBTYPE_h263),
        KNOWN(MEDIASUBTYPE_S263),
        KNOWN(MEDIASUBTYPE_s263),
        KNOWN(MEDIASUBTYPE_AMVV),
        KNOWN(MEDIASUBTYPE_WVC1_CYBERLINK),
        KNOWN(MEDIASUBTYPE_WVC1_ARCSOFT),
        KNOWN(MEDIASUBTYPE_DVX3),
        KNOWN(MEDIASUBTYPE_dvx3),
        KNOWN(MEDIASUBTYPE_DIV3),
        KNOWN(MEDIASUBTYPE_div3),
        KNOWN(MEDIASUBTYPE_COL1),
        KNOWN(MEDIASUBTYPE_col1),
        KNOWN(MEDIASUBTYPE_DIV4),
        KNOWN(MEDIASUBTYPE_div4),
        KNOWN(MEDIASUBTYPE_DIV5),
        KNOWN(MEDIASUBTYPE_div5),
        KNOWN(MEDIASUBTYPE_DIV6),
        KNOWN(MEDIASUBTYPE_div6),
        KNOWN(MEDIASUBTYPE_AP41),
        KNOWN(MEDIASUBTYPE_ap41),
        KNOWN(MEDIASUBTYPE_MPG3),
        KNOWN(MEDIASUBTYPE_mpg3),
        KNOWN(MEDIASUBTYPE_DIV2),
        KNOWN(MEDIASUBTYPE_div2),
        KNOWN(MEDIASUBTYPE_DIV1),
        KNOWN(MEDIASUBTYPE_div1),
        KNOWN(MEDIASUBTYPE_MP41),
        KNOWN(MEDIASUBTYPE_mp41),
        KNOWN(MEDIASUBTYPE_THEORA),
        KNOWN(MEDIASUBTYPE_theora),
        KNOWN(FORMAT_RLTheora),
        KNOWN(MEDIASUBTYPE_IMA_AMV),
        KNOWN(MEDIASUBTYPE_NELLYMOSER),
        KNOWN(MEDIASUBTYPE_HDMV_LPCM_AUDIO),
        KNOWN(MEDIASUBTYPE_MLP),
        KNOWN(MEDIASUBTYPE_FFMPEG_AUDIO),
        KNOWN(FORMAT_WaveFormatExFFMPEG),
        KNOWN(DXVA_Intel_VC1_ClearVideo),
        KNOWN(DXVA_Intel_H264_ClearVideo),
        KNOWN(DXVA_MPEG4_ASP),
        KNOWN(MEDIASUBTYPE_422P),
        KNOWN(MEDIASUBTYPE_444P),
        KNOWN(MEDIASUBTYPE_411P),
        KNOWN(MEDIASUBTYPE_410P),
        KNOWN(MEDIASUBTYPE_VYUY),
        KNOWN(MEDIASUBTYPE_Y800),
        KNOWN(MEDIASUBTYPE_NV21),
        KNOWN(MEDIASUBTYPE_YV16)
	};
	const int KnownGuidCount = sizeof(KnownGuidList) / sizeof(KnownGuidList[0]);


	bool NameGuid(GUID guid, CString &str)
	{
		for (int i=0; i<KnownGuidCount; i++) {
			if (KnownGuidList[i].guid == guid) {
				str = CString(KnownGuidList[i].name);
				return true;
			}
		}

		LPOLESTR	str2;
		StringFromCLSID(guid, &str2);
		str = CString(str2);
		CoTaskMemFree(str2);
		return false;
	}


	struct FormatTagPair {
		int		tag;
		LPCTSTR	name;
	};

	const FormatTagPair	KnownFormatsList[] = 
	{
		{ 0,		_T("Invalid Format") },
		{ 1,		_T("Raw PCM") },
		{ 2,		_T("ADPCM") },
		{ 3,		_T("IEEE Float") },
		{ 5,		_T("IBM CVSD") },
		{ 6,		_T("A-Law PCM") },
		{ 7,		_T("Mu-Law PCM") },
		{ 0x10,		_T("OKI ADPCM") },
		{ 0x11,		_T("DVI/IMA ADPCM") },
		{ 0x12,		_T("Mediaspace ADPCM") },
		{ 0x13,		_T("Sierra ADPCM") },
		{ 0x14,		_T("G.723 ADPCM") },
		{ 0x15,		_T("DigiSTD") },
		{ 0x16,		_T("DigiFIX") },
		{ 0x17,		_T("Dialogic OKI ADPCM") },
		{ 0x18,		_T("Media Vision ADPCM") },
		{ 0x20,		_T("YAMAHA ADPCM") },
		{ 0x21,		_T("Sonarc Speech") },
		{ 0x22,		_T("DSP Group TrueSpeech") },
		{ 0x23,		_T("Echo Speech") },
		{ 0x24,		_T("AudioFile AF36") },
		{ 0x25,		_T("APTX") },
		{ 0x26,		_T("AudioFile AF10") },
		{ 0x30,		_T("Dolby AC-2") },
		{ 0x31,		_T("GSM 6.10") },
		{ 0x32,		_T("MSN Audio") },
		{ 0x33,		_T("Antex ADPCME") },
		{ 0x34,		_T("Control Resources VQLPC") },
		{ 0x35,		_T("DigiReal") },
		{ 0x36,		_T("DigiADPCM") },
		{ 0x37,		_T("Control Resources CR10") },
		{ 0x38,		_T("NMS VBXADPCM") },
		{ 0x39,		_T("CS IMA ADPCM") },
		{ 0x3A,		_T("Echo Speech 3") },
		{ 0x3B,		_T("Rockwell ADPCM") },
		{ 0x3C,		_T("Rockwell Digitalk") },
		{ 0x3D,		_T("Xebec") },
		{ 0x40,		_T("G.721 ADPCM") },
		{ 0x41,		_T("G.728 CELP") },
		{ 0x50,		_T("MPEG Audio") },
		{ 0x55,		_T("MPEG Layer 3") },
		{ 0x60,		_T("Cirrus Logic") },
		{ 0x61,		_T("ESS PCM") },
		{ 0x62,		_T("Voxware") },
		{ 0x63,		_T("Canopus ATRAC") },
		{ 0x64,		_T("G.726 ADPCM") },
		{ 0x65,		_T("G.722 ADPCM") },
		{ 0x66,		_T("DSAT") },
		{ 0x67,		_T("DSAT Display") },
		{ 0x80,		_T("Softsound") },
		{ 0xFF,		_T("MPEG-2/4 AAC") },
		{ 0x100,	_T("Rhetorex ADPCM") },
		{ 0x200,	_T("Creative ADPCM") },
		{ 0x202,	_T("Creative Fastspeech 8") },
		{ 0x203,	_T("Creative Fastspeech 10") },
		{ 0x300,	_T("Quarterdeck") },
		{ 0x400,	_T("Brooktree Digital") },
		{ 0x1000,	_T("Olivetti GSM") },
		{ 0x1001,	_T("Olivetti ADPCM") },
		{ 0x1002,	_T("Olivetti CELP") },
		{ 0x1003,	_T("Olivetti SBC") },
		{ 0x1004,	_T("Olivetti OPR") },
		{ 0x1100,	_T("LH Codec") },
		{ 0x1400,	_T("Norris") },
		{ 0x2000,	_T("Dolby AC-3") }
	};
	const int KnownFormatsCount = sizeof(KnownFormatsList) / sizeof(KnownFormatsList[0]);

	int GetFormatName(int wFormatTag, CString &str)
	{
		for (int i=0; i<KnownFormatsCount; i++) {
			if (wFormatTag == KnownFormatsList[i].tag) {
				str = CString(KnownFormatsList[i].name);
				return 0;
			}
		}

		str.Format(_T("Unknown (%d)"), wFormatTag);
		return 1;
	}


};


