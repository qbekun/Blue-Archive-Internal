#pragma once
#include "unitysdk.h"

#define CLEARDECKGROUPLISTSCROLLVIEWCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26FDCD0)
#define CLEARDECKGROUPLISTSCROLLVIEWCONTROLLER_SETDATA_OFFSET UNITYSDK_OFFSET(0x26FDD10)

	inline static constexpr unsigned int ClearDeckGroupListScrollViewController_TypeDefinitionIndex = 7060;

	class ClearDeckGroupListScrollViewController : public ::System::Xml::AttributePSVIInfo
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLEARDECKGROUPLISTSCROLLVIEWCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CLEARDECKGROUPLISTSCROLLVIEWCONTROLLER_SETDATA_OFFSET))(arg, nullptr);
		}

	};

