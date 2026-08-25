#pragma once
#include "unitysdk.h"

class Direction;
class Sorting;
class Pivot;
namespace UnityEngine { class Vector2; }
class OnReposition;
class UIPanel;

#define UITABLE_START_OFFSET UNITYSDK_OFFSET(0xA3E810)
#define UITABLE_SORT_OFFSET UNITYSDK_OFFSET(0xA3E850)
#define UITABLE_SET_REPOSITIONNOW_OFFSET UNITYSDK_OFFSET(0xA3E8E0)
#define UITABLE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA3E900)
#define UITABLE_INIT_OFFSET UNITYSDK_OFFSET(0xA3E930)
#define UITABLE_REPOSITION_OFFSET UNITYSDK_OFFSET(0xA3E9C0)
#define UITABLE_REPOSITIONVARIABLESIZE_OFFSET UNITYSDK_OFFSET(0xA3EE40)
#define UITABLE_GETCHILDLIST_OFFSET UNITYSDK_OFFSET(0xA3EB60)
#define UITABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3FB20)
#define UITABLE_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0xA3FB70)

	inline static constexpr unsigned int UITable_TypeDefinitionIndex = 82;

	class UITable : public Il2CppObject
	{
	public:
		::System::Int32 columns; // 0x18
		Direction* direction; // 0x1C
		Sorting* sorting; // 0x20
		Pivot* pivot; // 0x24
		Pivot* cellAlignment; // 0x28
		::System::Boolean hideInactive; // 0x2C
		::System::Boolean keepWithinPanel; // 0x2D
		::UnityEngine::Vector2* padding; // 0x30
		OnReposition* onReposition; // 0x38
		Il2CppObject* onCustomSort; // 0x40
		UIPanel* mPanel; // 0x48
		::System::Boolean mInitDone; // 0x50
		::System::Boolean mReposition; // 0x51

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITABLE_START_OFFSET))(nullptr);
		}

		::System::Void Sort(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UITABLE_SORT_OFFSET))(arg, nullptr);
		}

		::System::Void set_repositionNow(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITABLE_SET_REPOSITIONNOW_OFFSET))(arg, nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITABLE_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITABLE_INIT_OFFSET))(nullptr);
		}

		::System::Void Reposition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITABLE_REPOSITION_OFFSET))(nullptr);
		}

		::System::Void RepositionVariableSize(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UITABLE_REPOSITIONVARIABLESIZE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetChildList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITABLE_GETCHILDLIST_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITABLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITABLE_ONVALIDATE_OFFSET))(nullptr);
		}

	};

