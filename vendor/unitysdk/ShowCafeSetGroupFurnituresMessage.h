#pragma once
#include "unitysdk.h"

#define SHOWCAFESETGROUPFURNITURESMESSAGE_GET_SETGROUPID_OFFSET UNITYSDK_OFFSET(0x225FA30)
#define SHOWCAFESETGROUPFURNITURESMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x225F6B0)
#define SHOWCAFESETGROUPFURNITURESMESSAGE_SET_SETGROUPID_OFFSET UNITYSDK_OFFSET(0x225FA40)

	inline static constexpr unsigned int ShowCafeSetGroupFurnituresMessage_TypeDefinitionIndex = 4568;

	class ShowCafeSetGroupFurnituresMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Int64 _SetGroupId_k__BackingField; // 0x18

		::System::Int64 get_SetGroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOWCAFESETGROUPFURNITURESMESSAGE_GET_SETGROUPID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SHOWCAFESETGROUPFURNITURESMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_SetGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SHOWCAFESETGROUPFURNITURESMESSAGE_SET_SETGROUPID_OFFSET))(arg, nullptr);
		}

	};

