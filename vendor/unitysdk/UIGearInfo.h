#pragma once
#include "unitysdk.h"

class UILabel;
class GearObject;

#define UIGEARINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x2320CF0)
#define UIGEARINFO_SETIMAGE_OFFSET UNITYSDK_OFFSET(0x2320D00)
#define UIGEARINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0x2320DB0)

	inline static constexpr unsigned int UIGearInfo_TypeDefinitionIndex = 4917;

	class UIGearInfo : public Il2CppObject
	{
	public:
		UILabel* levelLabel; // 0x18
		UILabel* tierLabel; // 0x20
		UILabel* nextTierLabel; // 0x28
		UILabel* gearName; // 0x30
		UILabel* gearDescription; // 0x38
		::Il2CppArray<::System::Object*>* images; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGEARINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetImage(GearObject* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(GearObject*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIGEARINFO_SETIMAGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetData(GearObject* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(GearObject*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIGEARINFO_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

	};

