#pragma once
#include "unitysdk.h"

class UIGrid;
namespace UnityEngine { class Transform; }

#define ADDITIONALSKILLTOOLTIPICONGRID_SETDATA_OFFSET UNITYSDK_OFFSET(0x2735570)
#define ADDITIONALSKILLTOOLTIPICONGRID_GET_MYTRANSFORM_OFFSET UNITYSDK_OFFSET(0x273F930)
#define ADDITIONALSKILLTOOLTIPICONGRID_.CTOR_OFFSET UNITYSDK_OFFSET(0x273F9B0)

	inline static constexpr unsigned int AdditionalSkillTooltipIconGrid_TypeDefinitionIndex = 7222;

	class AdditionalSkillTooltipIconGrid : public Il2CppObject
	{
	public:
		UIGrid* grid; // 0x18
		UIGrid* multifloorGrid; // 0x20
		Il2CppObject* icons; // 0x28
		::UnityEngine::Transform* myTransform; // 0x30

		::System::Void SetData(::System::Int64 arg, ::System::Int32 arg2, ::System::Boolean arg3, ::System::Boolean arg4, ::System::Boolean arg5)
		{
			((::System::Void(*)(::System::Int64, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ADDITIONALSKILLTOOLTIPICONGRID_SETDATA_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::UnityEngine::Transform* get_MyTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDITIONALSKILLTOOLTIPICONGRID_GET_MYTRANSFORM_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDITIONALSKILLTOOLTIPICONGRID_.CTOR_OFFSET))(nullptr);
		}

	};

