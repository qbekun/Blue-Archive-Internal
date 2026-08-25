#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3; }

#define SIMPLELEVER_START_OFFSET UNITYSDK_OFFSET(0x27B8F20)
#define SIMPLELEVER_.CTOR_OFFSET UNITYSDK_OFFSET(0x27B8F70)
#define SIMPLELEVER_UPDATE_OFFSET UNITYSDK_OFFSET(0x27B8F90)
#define SIMPLELEVER_LEVERSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x27B96A0)
#define SIMPLELEVER_ONPRESS_OFFSET UNITYSDK_OFFSET(0x27B96C0)
#define SIMPLELEVER_SNAPTOPOSITION_OFFSET UNITYSDK_OFFSET(0x27B9770)
#define SIMPLELEVER_ISLEVERUP_OFFSET UNITYSDK_OFFSET(0x27B9880)
#define SIMPLELEVER_UPDATELEVERSTATE_OFFSET UNITYSDK_OFFSET(0x27B9610)
#define SIMPLELEVER_RESETLEVERPOSITION_OFFSET UNITYSDK_OFFSET(0x27B9890)
#define SIMPLELEVER_GETINPUTPOSITION_OFFSET UNITYSDK_OFFSET(0x27B9460)

	inline static constexpr unsigned int SimpleLever_TypeDefinitionIndex = 7540;

	class SimpleLever : public Il2CppObject
	{
	public:
		::System::Single dragRange; // 0x18
		::System::Single snapThreshold; // 0x1C
		Il2CppObject* OnStateChanged; // 0x20
		::System::Action* OnDragStart; // 0x28
		::System::Action* OnDragEnd; // 0x30
		::UnityEngine::Vector3* startPosition; // 0x38
		::UnityEngine::Vector3* dragStartPosition; // 0x44
		::UnityEngine::Vector3* leverStartPosition; // 0x50
		::System::Boolean isDragging; // 0x5C
		::System::Boolean isUp; // 0x5D
		::System::Boolean lastReportedState; // 0x5E

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLELEVER_START_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLELEVER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLELEVER_UPDATE_OFFSET))(nullptr);
		}

		::System::Void LeverStateChanged(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SIMPLELEVER_LEVERSTATECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void OnPress(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SIMPLELEVER_ONPRESS_OFFSET))(arg, nullptr);
		}

		::System::Void SnapToPosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLELEVER_SNAPTOPOSITION_OFFSET))(nullptr);
		}

		::System::Boolean IsLeverUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLELEVER_ISLEVERUP_OFFSET))(nullptr);
		}

		::System::Void UpdateLeverState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLELEVER_UPDATELEVERSTATE_OFFSET))(nullptr);
		}

		::System::Void ResetLeverPosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLELEVER_RESETLEVERPOSITION_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* GetInputPosition()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLELEVER_GETINPUTPOSITION_OFFSET))(nullptr);
		}

	};

