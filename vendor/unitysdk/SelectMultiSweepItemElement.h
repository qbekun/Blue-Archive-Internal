#pragma once
#include "unitysdk.h"

class SelectMultiSweepItemScrollInfo;

#define SELECTMULTISWEEPITEMELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x270B870)
#define SELECTMULTISWEEPITEMELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x270BBE0)

	inline static constexpr unsigned int SelectMultiSweepItemElement_TypeDefinitionIndex = 7116;

	class SelectMultiSweepItemElement : public ::System::Xml::Serialization::SerializationSource
	{
	public:
		::Il2CppArray<::System::Object*>* itemSelectionCards; // 0x28

		::System::Void SetData(SelectMultiSweepItemScrollInfo* arg)
		{
			((::System::Void(*)(SelectMultiSweepItemScrollInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SELECTMULTISWEEPITEMELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SELECTMULTISWEEPITEMELEMENT_.CTOR_OFFSET))(nullptr);
		}

	};

