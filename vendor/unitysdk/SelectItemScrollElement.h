#pragma once
#include "unitysdk.h"

class SelectItemScrollInfo;

#define SELECTITEMSCROLLELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x272E900)
#define SELECTITEMSCROLLELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x272E940)

	inline static constexpr unsigned int SelectItemScrollElement_TypeDefinitionIndex = 7189;

	class SelectItemScrollElement : public ::System::Xml::Serialization::SchemaTypes
	{
	public:
		::Il2CppArray<::System::Object*>* itemSelectionCards; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SELECTITEMSCROLLELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(SelectItemScrollInfo* arg)
		{
			((::System::Void(*)(SelectItemScrollInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SELECTITEMSCROLLELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

	};

