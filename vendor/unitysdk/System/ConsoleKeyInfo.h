#pragma once
#include "../unitysdk.h"

#define SYSTEM_CONSOLEKEYINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9385560)
#define SYSTEM_CONSOLEKEYINFO_GET_KEYCHAR_OFFSET UNITYSDK_OFFSET(0x9385630)
#define SYSTEM_CONSOLEKEYINFO_GET_KEY_OFFSET UNITYSDK_OFFSET(0x9385640)
#define SYSTEM_CONSOLEKEYINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x9385650)
#define SYSTEM_CONSOLEKEYINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x93856D0)
#define SYSTEM_CONSOLEKEYINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9385700)

namespace System
{
	inline static constexpr unsigned int ConsoleKeyInfo_TypeDefinitionIndex = 23887;

	class ConsoleKeyInfo : public Il2CppObject
	{
	public:
		::System::Char _keyChar; // 0x10
		::System::ConsoleKey* _key; // 0x14
		::System::ConsoleModifiers* _mods; // 0x18

		::System::Void .ctor(::System::Char arg, ::System::ConsoleKey* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Char, ::System::ConsoleKey*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLEKEYINFO_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Char get_KeyChar()
		{
			return (return (::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLEKEYINFO_GET_KEYCHAR_OFFSET))(nullptr);
		}

		::System::ConsoleKey* get_Key()
		{
			return (return (::System::ConsoleKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLEKEYINFO_GET_KEY_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLEKEYINFO_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::ConsoleKeyInfo* arg)
		{
			return (return (::System::Boolean(*)(::System::ConsoleKeyInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLEKEYINFO_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLEKEYINFO_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

