#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_ICHANNELINFO_GET_CHANNELDATA_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int IChannelInfo_TypeDefinitionIndex = 24432;

	class IChannelInfo : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* get_ChannelData()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ICHANNELINFO_GET_CHANNELDATA_OFFSET))(nullptr);
		}

	};
}

