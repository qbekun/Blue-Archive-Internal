#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_CHANNELINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x91C2A20)
#define SYSTEM_RUNTIME_REMOTING_CHANNELINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x91C2A90)
#define SYSTEM_RUNTIME_REMOTING_CHANNELINFO_GET_CHANNELDATA_OFFSET UNITYSDK_OFFSET(0x91C2B50)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int ChannelInfo_TypeDefinitionIndex = 24427;

	class ChannelInfo : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* channelData; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ChannelData()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELINFO_GET_CHANNELDATA_OFFSET))(nullptr);
		}

	};
}

