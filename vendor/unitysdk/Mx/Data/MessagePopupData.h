#pragma once
#include "../../unitysdk.h"

#define MX_DATA_MESSAGEPOPUPDATA_INITIALIZECLIENT_OFFSET UNITYSDK_OFFSET(0x18EF260)
#define MX_DATA_MESSAGEPOPUPDATA_GETDATA_OFFSET UNITYSDK_OFFSET(0x18EF2A0)
#define MX_DATA_MESSAGEPOPUPDATA_GETDATA_OFFSET UNITYSDK_OFFSET(0x18EF320)
#define MX_DATA_MESSAGEPOPUPDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18EF390)

namespace MX::Data
{
	inline static constexpr unsigned int MessagePopupData_TypeDefinitionIndex = 16177;

	class MessagePopupData : public Il2CppObject
	{
	public:
		::System::Void InitializeClient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MESSAGEPOPUPDATA_INITIALIZECLIENT_OFFSET))(nullptr);
		}

		Il2CppObject* GetData(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MESSAGEPOPUPDATA_GETDATA_OFFSET))(str, nullptr);
		}

		Il2CppObject* GetData(::System::UInt32 arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MESSAGEPOPUPDATA_GETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MESSAGEPOPUPDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

