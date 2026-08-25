#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Color; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }
class FurnitureObject;

#define CAFEOCCUPIEDAREACOMPONENT_SHOWSAVABLESTATE_OFFSET UNITYSDK_OFFSET(0x19C6130)
#define CAFEOCCUPIEDAREACOMPONENT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19C6220)
#define CAFEOCCUPIEDAREACOMPONENT_GET_PARENTFORSTANDBY_OFFSET UNITYSDK_OFFSET(0x19C6270)
#define CAFEOCCUPIEDAREACOMPONENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x19C6280)
#define CAFEOCCUPIEDAREACOMPONENT_DETACH_OFFSET UNITYSDK_OFFSET(0x19C62D0)
#define CAFEOCCUPIEDAREACOMPONENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x19C6320)
#define CAFEOCCUPIEDAREACOMPONENT_APPLYZOFFSET_OFFSET UNITYSDK_OFFSET(0x19C63D0)
#define CAFEOCCUPIEDAREACOMPONENT_APPLYCOLOR_OFFSET UNITYSDK_OFFSET(0x19C6180)
#define CAFEOCCUPIEDAREACOMPONENT_ATTACH_OFFSET UNITYSDK_OFFSET(0x19C64A0)
#define CAFEOCCUPIEDAREACOMPONENT_SET_PARENTFORSTANDBY_OFFSET UNITYSDK_OFFSET(0x19C67A0)

	inline static constexpr unsigned int CafeOccupiedAreaComponent_TypeDefinitionIndex = 1388;

	class CafeOccupiedAreaComponent : public Il2CppObject
	{
	public:
		::UnityEngine::Renderer* rend; // 0x18
		::System::String* colorName; // 0x20
		::UnityEngine::Color* editOkColor; // 0x28
		::UnityEngine::Color* editErrorColor; // 0x38
		::System::Int32 colorId; // 0x48
		::System::Int32 zOffsetFactorId; // 0x4C
		::System::Int32 zOffsetUnitsId; // 0x50
		::UnityEngine::Material* material; // 0x58
		::UnityEngine::Transform* _ParentForStandby_k__BackingField; // 0x60

		::System::Void ShowSavableState(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAFEOCCUPIEDAREACOMPONENT_SHOWSAVABLESTATE_OFFSET))(arg, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEOCCUPIEDAREACOMPONENT_ONDESTROY_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_ParentForStandby()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEOCCUPIEDAREACOMPONENT_GET_PARENTFORSTANDBY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEOCCUPIEDAREACOMPONENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Detach()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEOCCUPIEDAREACOMPONENT_DETACH_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEOCCUPIEDAREACOMPONENT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void ApplyZOffset(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CAFEOCCUPIEDAREACOMPONENT_APPLYZOFFSET_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEOCCUPIEDAREACOMPONENT_APPLYCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Void Attach(::UnityEngine::Transform* arg, FurnitureObject* arg2)
		{
			((::System::Void(*)(::UnityEngine::Transform*, FurnitureObject*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEOCCUPIEDAREACOMPONENT_ATTACH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_ParentForStandby(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEOCCUPIEDAREACOMPONENT_SET_PARENTFORSTANDBY_OFFSET))(arg, nullptr);
		}

	};

