#pragma once
#include "unitysdk.h"

#define NXPKAKAOPOPUPOPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC3CE0)
#define NXPKAKAOPOPUPOPTION_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x9CC4320)
#define NXPKAKAOPOPUPOPTION_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x9CC4330)
#define NXPKAKAOPOPUPOPTION_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x9CC4340)
#define NXPKAKAOPOPUPOPTION_SET_TITLE_OFFSET UNITYSDK_OFFSET(0x9CC4350)
#define NXPKAKAOPOPUPOPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x9CC4360)
#define NXPKAKAOPOPUPOPTION_SET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x9CC4370)

	inline static constexpr unsigned int NXPKakaoPopupOption_TypeDefinitionIndex = 27253;

	class NXPKakaoPopupOption : public Il2CppObject
	{
	public:
		::System::Boolean enabled; // 0x10
		::System::String* title; // 0x18
		::System::String* message; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NXPKAKAOPOPUPOPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_Enabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NXPKAKAOPOPUPOPTION_GET_ENABLED_OFFSET))(nullptr);
		}

		::System::Void set_Enabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NXPKAKAOPOPUPOPTION_SET_ENABLED_OFFSET))(arg, nullptr);
		}

		::System::String* get_Title()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NXPKAKAOPOPUPOPTION_GET_TITLE_OFFSET))(nullptr);
		}

		::System::Void set_Title(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NXPKAKAOPOPUPOPTION_SET_TITLE_OFFSET))(str, nullptr);
		}

		::System::String* get_Message()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NXPKAKAOPOPUPOPTION_GET_MESSAGE_OFFSET))(nullptr);
		}

		::System::Void set_Message(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NXPKAKAOPOPUPOPTION_SET_MESSAGE_OFFSET))(str, nullptr);
		}

	};

