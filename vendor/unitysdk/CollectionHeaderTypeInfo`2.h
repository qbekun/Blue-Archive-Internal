#pragma once
#include "unitysdk.h"

#define COLLECTIONHEADERTYPEINFO`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define COLLECTIONHEADERTYPEINFO`2_GET_SEPARATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define COLLECTIONHEADERTYPEINFO`2_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int CollectionHeaderTypeInfo`2_TypeDefinitionIndex = 36679;

	class CollectionHeaderTypeInfo`2 : public ::MX::GameData::DAO::Battle::LogicEffectTemplateModifierDAO
	{
	public:
		::System::Int32 minimalCount; // 0x0
		::System::String* separator; // 0x0
		Il2CppObject* parser; // 0x0

		::System::Void .ctor(::System::String* str, Il2CppObject* arg, ::System::Net::Http::Headers::HttpHeaderKind* arg, ::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::System::Net::Http::Headers::HttpHeaderKind*, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONHEADERTYPEINFO`2_.CTOR_OFFSET))(str, arg, arg, arg, str, nullptr);
		}

		::System::String* get_Separator()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONHEADERTYPEINFO`2_GET_SEPARATOR_OFFSET))(nullptr);
		}

		::System::Boolean TryParse(::System::String* str, ::System::Object&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONHEADERTYPEINFO`2_TRYPARSE_OFFSET))(str, arg, nullptr);
		}

	};

