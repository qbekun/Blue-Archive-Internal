#pragma once
#include "../../unitysdk.h"

#define MX_MINIGAMESHOOTING_ENTITY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x145C670)
#define MX_MINIGAMESHOOTING_ENTITY_SET_ADDRESSKEY_OFFSET UNITYSDK_OFFSET(0x145C680)
#define MX_MINIGAMESHOOTING_ENTITY_GET_ADDRESSKEY_OFFSET UNITYSDK_OFFSET(0x145C690)
#define MX_MINIGAMESHOOTING_ENTITY_SET_SECTIONINDEX_OFFSET UNITYSDK_OFFSET(0x145C6A0)
#define MX_MINIGAMESHOOTING_ENTITY_GET_SECTIONINDEX_OFFSET UNITYSDK_OFFSET(0x145C6B0)
#define MX_MINIGAMESHOOTING_ENTITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x145C6C0)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int Entity_TypeDefinitionIndex = 15042;

	class Entity : public Il2CppObject
	{
	public:
		::System::String* _AddressKey_k__BackingField; // 0x18
		::System::Int32 _SectionIndex_k__BackingField; // 0x20

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_ENTITY_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void set_AddressKey(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_ENTITY_SET_ADDRESSKEY_OFFSET))(str, nullptr);
		}

		::System::String* get_AddressKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_ENTITY_GET_ADDRESSKEY_OFFSET))(nullptr);
		}

		::System::Void set_SectionIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_ENTITY_SET_SECTIONINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SectionIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_ENTITY_GET_SECTIONINDEX_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_ENTITY_.CTOR_OFFSET))(nullptr);
		}

	};
}

