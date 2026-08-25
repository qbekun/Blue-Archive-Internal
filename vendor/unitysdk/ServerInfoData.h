#pragma once
#include "unitysdk.h"

class ServerInfoConnectionGroupData;

#define SERVERINFODATA_GET_DEFAULTCONNECTIONGROUP_OFFSET UNITYSDK_OFFSET(0xC2A230)
#define SERVERINFODATA_SET_DEFAULTCONNECTIONMODE_OFFSET UNITYSDK_OFFSET(0xC2A240)
#define SERVERINFODATA_GETCONNECTIONGROUPREGION_OFFSET UNITYSDK_OFFSET(0xC2A250)
#define SERVERINFODATA_SET_CONNECTIONGROUPSJSON_OFFSET UNITYSDK_OFFSET(0xC2A6D0)
#define SERVERINFODATA_GET_CONNECTIONGROUPSJSON_OFFSET UNITYSDK_OFFSET(0xC2A6E0)
#define SERVERINFODATA_SET_DEFAULTCONNECTIONGROUP_OFFSET UNITYSDK_OFFSET(0xC2A6F0)
#define SERVERINFODATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xC2A700)
#define SERVERINFODATA_SET_CONNECTIONGROUPS_OFFSET UNITYSDK_OFFSET(0xC2A710)
#define SERVERINFODATA_GET_CONNECTIONGROUPS_OFFSET UNITYSDK_OFFSET(0xC2A720)
#define SERVERINFODATA_OF0C9145E8D37DAC6CED688471894D7849E2C7F58D0FA1973D580F70640302477_OFFSET UNITYSDK_OFFSET(0xC2A730)
#define SERVERINFODATA_GET_DEFAULTCONNECTIONMODE_OFFSET UNITYSDK_OFFSET(0xC3C4E0)

	inline static constexpr unsigned int ServerInfoData_TypeDefinitionIndex = 8912;

	class ServerInfoData : public Il2CppObject
	{
	public:
		::System::String* _DefaultConnectionGroup_k__BackingField; // 0x10
		::System::String* _ConnectionGroupsJson_k__BackingField; // 0x18
		::System::String* _DefaultConnectionMode_k__BackingField; // 0x20
		::Il2CppArray<::System::Object*>* _ConnectionGroups_k__BackingField; // 0x28

		::System::String* get_DefaultConnectionGroup()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SERVERINFODATA_GET_DEFAULTCONNECTIONGROUP_OFFSET))(nullptr);
		}

		::System::Void set_DefaultConnectionMode(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SERVERINFODATA_SET_DEFAULTCONNECTIONMODE_OFFSET))(str, nullptr);
		}

		ServerInfoConnectionGroupData* GetConnectionGroupRegion(::System::String* str, ::System::String* str2)
		{
			return ((ServerInfoConnectionGroupData*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SERVERINFODATA_GETCONNECTIONGROUPREGION_OFFSET))(str, str2, nullptr);
		}

		::System::Void set_ConnectionGroupsJson(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SERVERINFODATA_SET_CONNECTIONGROUPSJSON_OFFSET))(str, nullptr);
		}

		::System::String* get_ConnectionGroupsJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SERVERINFODATA_GET_CONNECTIONGROUPSJSON_OFFSET))(nullptr);
		}

		::System::Void set_DefaultConnectionGroup(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SERVERINFODATA_SET_DEFAULTCONNECTIONGROUP_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SERVERINFODATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ConnectionGroups(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SERVERINFODATA_SET_CONNECTIONGROUPS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ConnectionGroups()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SERVERINFODATA_GET_CONNECTIONGROUPS_OFFSET))(nullptr);
		}

		::System::Void Of0c9145e8d37dac6ced688471894d7849e2c7f58d0fa1973d580f70640302477()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SERVERINFODATA_OF0C9145E8D37DAC6CED688471894D7849E2C7F58D0FA1973D580F70640302477_OFFSET))(nullptr);
		}

		::System::String* get_DefaultConnectionMode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SERVERINFODATA_GET_DEFAULTCONNECTIONMODE_OFFSET))(nullptr);
		}

	};

