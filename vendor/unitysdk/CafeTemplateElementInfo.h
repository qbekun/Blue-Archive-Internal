#pragma once
#include "unitysdk.h"

class CafeTemplateElementCountState;

#define CAFETEMPLATEELEMENTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x22676B0)
#define CAFETEMPLATEELEMENTINFO_COMPARETO_OFFSET UNITYSDK_OFFSET(0x2267710)

	inline static constexpr unsigned int CafeTemplateElementInfo_TypeDefinitionIndex = 4597;

	class CafeTemplateElementInfo : public Il2CppObject
	{
	public:
		::System::Int64 FurnitureId; // 0x10
		::System::Int32 CurrentFurnitureCount; // 0x18
		::System::Int32 TotalFurnitureCount; // 0x1C
		CafeTemplateElementCountState* countState; // 0x20

		::System::Void .ctor(::System::Int64 arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CAFETEMPLATEELEMENTINFO_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int32 CompareTo(::System::Object* arg)
		{
			return ((::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CAFETEMPLATEELEMENTINFO_COMPARETO_OFFSET))(arg, nullptr);
		}

	};

