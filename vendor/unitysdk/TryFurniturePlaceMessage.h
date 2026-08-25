#pragma once
#include "unitysdk.h"

#define TRYFURNITUREPLACEMESSAGE_GET_FURNITUREID_OFFSET UNITYSDK_OFFSET(0x25866E0)
#define TRYFURNITUREPLACEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x25866F0)
#define TRYFURNITUREPLACEMESSAGE_SET_FURNITUREID_OFFSET UNITYSDK_OFFSET(0x2586710)

	inline static constexpr unsigned int TryFurniturePlaceMessage_TypeDefinitionIndex = 6222;

	class TryFurniturePlaceMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Int64 _FurnitureId_k__BackingField; // 0x18

		::System::Int64 get_FurnitureId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + TRYFURNITUREPLACEMESSAGE_GET_FURNITUREID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + TRYFURNITUREPLACEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_FurnitureId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + TRYFURNITUREPLACEMESSAGE_SET_FURNITUREID_OFFSET))(arg, nullptr);
		}

	};

