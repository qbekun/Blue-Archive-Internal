#pragma once
#include "unitysdk.h"

class UICommonIndicatorUnit;
class UIGrid;

#define UICOMMONINDICATOR_MOVE_OFFSET UNITYSDK_OFFSET(0x2344B30)
#define UICOMMONINDICATOR_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2344C60)
#define UICOMMONINDICATOR_AWAKE_OFFSET UNITYSDK_OFFSET(0x2344E90)
#define UICOMMONINDICATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x2344F20)
#define UICOMMONINDICATOR_REFRESH_OFFSET UNITYSDK_OFFSET(0x2344BB0)
#define UICOMMONINDICATOR_SET_OFFSET UNITYSDK_OFFSET(0x2344FE0)

	inline static constexpr unsigned int UICommonIndicator_TypeDefinitionIndex = 4995;

	class UICommonIndicator : public Il2CppObject
	{
	public:
		UICommonIndicatorUnit* unitResource; // 0x18
		UIGrid* grid; // 0x20
		Il2CppObject* indicatorList; // 0x28
		Il2CppObject* changeCallback; // 0x30
		::System::Int32 currentIndex; // 0x38

		::System::Void Move(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICOMMONINDICATOR_MOVE_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::System::Int32 arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICOMMONINDICATOR_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICOMMONINDICATOR_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICOMMONINDICATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICOMMONINDICATOR_REFRESH_OFFSET))(nullptr);
		}

		::System::Void Set(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICOMMONINDICATOR_SET_OFFSET))(arg, nullptr);
		}

	};

