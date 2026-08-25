#pragma once
#include "../unitysdk.h"

#define NPA_PERMISSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BBCD40)

namespace NPA
{
	inline static constexpr unsigned int Permission_TypeDefinitionIndex = 25524;

	class Permission : public Il2CppObject
	{
	public:
		::System::String* READ_CALENDAR; // 0x0
		::System::String* WRITE_CALENDAR; // 0x0
		::System::String* CAMERA; // 0x0
		::System::String* READ_CONTACTS; // 0x0
		::System::String* WRITE_CONTACTS; // 0x0
		::System::String* GET_ACCOUNTS; // 0x0
		::System::String* ACCESS_FINE_LOCATION; // 0x0
		::System::String* ACCESS_COARSE_LOCATION; // 0x0
		::System::String* RECORD_AUDIO; // 0x0
		::System::String* READ_PHONE_STATE; // 0x0
		::System::String* READ_PHONE_NUMBERS; // 0x0
		::System::String* CALL_PHONE; // 0x0
		::System::String* READ_CALL_LOG; // 0x0
		::System::String* WRITE_CALL_LOG; // 0x0
		::System::String* ADD_VOICEMAIL; // 0x0
		::System::String* USE_SIP; // 0x0
		::System::String* PROCESS_OUTGOING_CALLS; // 0x0
		::System::String* BODY_SENSORS; // 0x0
		::System::String* SEND_SMS; // 0x0
		::System::String* RECEIVE_SMS; // 0x0
		::System::String* READ_SMS; // 0x0
		::System::String* RECEIVE_WAP_PUSH; // 0x0
		::System::String* RECEIVE_MMS; // 0x0
		::System::String* READ_EXTERNAL_STORAGE; // 0x0
		::System::String* WRITE_EXTERNAL_STORAGE; // 0x0
		::System::String* READ_MEDIA_AUDIO; // 0x0
		::System::String* READ_MEDIA_IMAGES; // 0x0
		::System::String* READ_MEDIA_VIDEO; // 0x0
		::System::String* BLUETOOTH_ADVERTISE; // 0x0
		::System::String* BLUETOOTH_CONNECT; // 0x0
		::System::String* BLUETOOTH_SCAN; // 0x0
		::System::String* POST_NOTIFICATIONS; // 0x0
		::System::String* NEARBY_WIFI_DEVICES; // 0x0
		::System::Int32 PERMISSION_GRANTED; // 0x0
		::System::Int32 PERMISSION_DENIED; // 0x0
		::System::Int32 PERMISSION_REQUIRED; // 0x0
		::System::Int32 PERMISSION_OPTIONAL; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PERMISSION_.CTOR_OFFSET))(nullptr);
		}

	};
}

