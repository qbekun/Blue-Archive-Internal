#pragma once
#include "unitysdk.h"

#define OPTIONDATALIST_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0xA2F6BD0)
#define OPTIONDATALIST_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2F3780)
#define OPTIONDATALIST_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0xA2F6BE0)

	inline static constexpr unsigned int OptionDataList_TypeDefinitionIndex = 34760;

	class OptionDataList : public Il2CppObject
	{
	public:
		Il2CppObject* m_Options; // 0x10

		::System::Void set_options(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + OPTIONDATALIST_SET_OPTIONS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPTIONDATALIST_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_options()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPTIONDATALIST_GET_OPTIONS_OFFSET))(nullptr);
		}

	};

