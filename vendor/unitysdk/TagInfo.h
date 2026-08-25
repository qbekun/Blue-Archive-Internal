#pragma once
#include "unitysdk.h"

#define TAGINFO_INIT_OFFSET UNITYSDK_OFFSET(0x996BF30)

	inline static constexpr unsigned int TagInfo_TypeDefinitionIndex = 27702;

	class TagInfo : public Il2CppObject
	{
	public:
		::System::String* name; // 0x10
		::System::String* prefix; // 0x18
		::System::String* defaultNs; // 0x20
		NamespaceState* defaultNsState; // 0x28
		::System::Xml::XmlSpace* xmlSpace; // 0x2C
		::System::String* xmlLang; // 0x30
		::System::Int32 prevNsTop; // 0x38
		::System::Int32 prefixCount; // 0x3C
		::System::Boolean mixed; // 0x40

		::System::Void Init(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TAGINFO_INIT_OFFSET))(arg, nullptr);
		}

	};

