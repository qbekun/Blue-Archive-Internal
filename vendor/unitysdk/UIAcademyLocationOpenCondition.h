#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }

#define UIACADEMYLOCATIONOPENCONDITION_GET_LOCK_OFFSET UNITYSDK_OFFSET(0x21B7C20)
#define UIACADEMYLOCATIONOPENCONDITION_SETDATA_OFFSET UNITYSDK_OFFSET(0x21B7CD0)
#define UIACADEMYLOCATIONOPENCONDITION_GET_OPEN_OFFSET UNITYSDK_OFFSET(0x21B8390)
#define UIACADEMYLOCATIONOPENCONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x21B8440)
#define UIACADEMYLOCATIONOPENCONDITION_GET_CONDITIONLABELS_OFFSET UNITYSDK_OFFSET(0x21B7F70)
#define UIACADEMYLOCATIONOPENCONDITION_GET_COUNTLABELS_OFFSET UNITYSDK_OFFSET(0x21B8180)

	inline static constexpr unsigned int UIAcademyLocationOpenCondition_TypeDefinitionIndex = 4203;

	class UIAcademyLocationOpenCondition : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* _lock; // 0x18
		::UnityEngine::GameObject* _open; // 0x20
		Il2CppObject* conditionLabels; // 0x28
		Il2CppObject* countLabels; // 0x30

		::UnityEngine::GameObject* get_Lock()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATIONOPENCONDITION_GET_LOCK_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::String* str, Il2CppObject* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATIONOPENCONDITION_SETDATA_OFFSET))(str, arg, arg2, nullptr);
		}

		::UnityEngine::GameObject* get_Open()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATIONOPENCONDITION_GET_OPEN_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATIONOPENCONDITION_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_ConditionLabels()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATIONOPENCONDITION_GET_CONDITIONLABELS_OFFSET))(nullptr);
		}

		Il2CppObject* get_CountLabels()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATIONOPENCONDITION_GET_COUNTLABELS_OFFSET))(nullptr);
		}

	};

