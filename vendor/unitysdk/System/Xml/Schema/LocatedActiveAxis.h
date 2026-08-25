#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_LOCATEDACTIVEAXIS_GET_COLUMN_OFFSET UNITYSDK_OFFSET(0x9A0B080)
#define SYSTEM_XML_SCHEMA_LOCATEDACTIVEAXIS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A0B090)
#define SYSTEM_XML_SCHEMA_LOCATEDACTIVEAXIS_REACTIVATE_OFFSET UNITYSDK_OFFSET(0x9A0B0D0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int LocatedActiveAxis_TypeDefinitionIndex = 27962;

	class LocatedActiveAxis : public ::UnityEngine::AddressableAssets::Addressables
	{
	public:
		::System::Int32 column; // 0x28
		::System::Boolean isMatched; // 0x2C
		::System::Xml::Schema::KeySequence* Ks; // 0x30

		::System::Int32 get_Column()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_LOCATEDACTIVEAXIS_GET_COLUMN_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Xml::Schema::Asttree* arg, ::System::Xml::Schema::KeySequence* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Xml::Schema::Asttree*, ::System::Xml::Schema::KeySequence*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_LOCATEDACTIVEAXIS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Reactivate(::System::Xml::Schema::KeySequence* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::KeySequence*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_LOCATEDACTIVEAXIS_REACTIVATE_OFFSET))(arg, nullptr);
		}

	};
}

