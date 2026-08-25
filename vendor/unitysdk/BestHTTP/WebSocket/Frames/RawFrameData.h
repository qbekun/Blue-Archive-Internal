#pragma once
#include "../../../unitysdk.h"

#define BESTHTTP_WEBSOCKET_FRAMES_RAWFRAMEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x4F3550)
#define BESTHTTP_WEBSOCKET_FRAMES_RAWFRAMEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x4F35B0)

namespace BestHTTP::WebSocket::Frames
{
	inline static constexpr unsigned int RawFrameData_TypeDefinitionIndex = 21333;

	class RawFrameData : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* Data; // 0x10
		::System::Int32 Length; // 0x18

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_FRAMES_RAWFRAMEDATA_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_FRAMES_RAWFRAMEDATA_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

