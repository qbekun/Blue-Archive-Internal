#pragma once
#include "unitysdk.h"

class Arrangement;
class Sorting;
class Pivot;
class OnReposition;
class UIPanel;
namespace UnityEngine { class Transform; }

#define UIGRID_SET_REPOSITIONNOW_OFFSET UNITYSDK_OFFSET(0x9FE4B0)
#define UIGRID_GETCHILDLIST_OFFSET UNITYSDK_OFFSET(0x9FC660)
#define UIGRID_GETCHILD_OFFSET UNITYSDK_OFFSET(0xA05550)
#define UIGRID_GETINDEX_OFFSET UNITYSDK_OFFSET(0xA055C0)
#define UIGRID_ADDCHILD_OFFSET UNITYSDK_OFFSET(0xA05620)
#define UIGRID_ADDCHILD_OFFSET UNITYSDK_OFFSET(0xA056D0)
#define UIGRID_REMOVECHILD_OFFSET UNITYSDK_OFFSET(0xA05780)
#define UIGRID_INIT_OFFSET UNITYSDK_OFFSET(0xA05800)
#define UIGRID_START_OFFSET UNITYSDK_OFFSET(0xA05890)
#define UIGRID_UPDATE_OFFSET UNITYSDK_OFFSET(0xA058F0)
#define UIGRID_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0xA05920)
#define UIGRID_SORTBYNAME_OFFSET UNITYSDK_OFFSET(0xA059A0)
#define UIGRID_SORTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0xA059F0)
#define UIGRID_SORTVERTICAL_OFFSET UNITYSDK_OFFSET(0xA05A60)
#define UIGRID_SORT_OFFSET UNITYSDK_OFFSET(0xA05AD0)
#define UIGRID_REPOSITION_OFFSET UNITYSDK_OFFSET(0xA05AE0)
#define UIGRID_CONSTRAINWITHINPANEL_OFFSET UNITYSDK_OFFSET(0xA05C10)
#define UIGRID_RESETPOSITION_OFFSET UNITYSDK_OFFSET(0xA05D10)
#define UIGRID_.CTOR_OFFSET UNITYSDK_OFFSET(0xA066B0)

	inline static constexpr unsigned int UIGrid_TypeDefinitionIndex = 44;

	class UIGrid : public Il2CppObject
	{
	public:
		Arrangement* arrangement; // 0x18
		Sorting* sorting; // 0x1C
		Pivot* pivot; // 0x20
		::System::Int32 maxPerLine; // 0x24
		::System::Single cellWidth; // 0x28
		::System::Single cellHeight; // 0x2C
		::System::Boolean animateSmoothly; // 0x30
		::System::Boolean hideInactive; // 0x31
		::System::Boolean keepWithinPanel; // 0x32
		OnReposition* onReposition; // 0x38
		Il2CppObject* onCustomSort; // 0x40
		::System::Boolean sorted; // 0x48
		::System::Boolean mReposition; // 0x49
		UIPanel* mPanel; // 0x50
		::System::Boolean mInitDone; // 0x58

		::System::Void set_repositionNow(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIGRID_SET_REPOSITIONNOW_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetChildList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGRID_GETCHILDLIST_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* GetChild(::System::Int32 arg)
		{
			return ((::UnityEngine::Transform*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIGRID_GETCHILD_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetIndex(::UnityEngine::Transform* arg)
		{
			return ((::System::Int32(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UIGRID_GETINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void AddChild(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UIGRID_ADDCHILD_OFFSET))(arg, nullptr);
		}

		::System::Void AddChild(::UnityEngine::Transform* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIGRID_ADDCHILD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean RemoveChild(::UnityEngine::Transform* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UIGRID_REMOVECHILD_OFFSET))(arg, nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGRID_INIT_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGRID_START_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGRID_UPDATE_OFFSET))(nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGRID_ONVALIDATE_OFFSET))(nullptr);
		}

		::System::Int32 SortByName(::UnityEngine::Transform* arg, ::UnityEngine::Transform* arg2)
		{
			return ((::System::Int32(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UIGRID_SORTBYNAME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 SortHorizontal(::UnityEngine::Transform* arg, ::UnityEngine::Transform* arg2)
		{
			return ((::System::Int32(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UIGRID_SORTHORIZONTAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 SortVertical(::UnityEngine::Transform* arg, ::UnityEngine::Transform* arg2)
		{
			return ((::System::Int32(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UIGRID_SORTVERTICAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Sort(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIGRID_SORT_OFFSET))(arg, nullptr);
		}

		::System::Void Reposition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGRID_REPOSITION_OFFSET))(nullptr);
		}

		::System::Void ConstrainWithinPanel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGRID_CONSTRAINWITHINPANEL_OFFSET))(nullptr);
		}

		::System::Void ResetPosition(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIGRID_RESETPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGRID_.CTOR_OFFSET))(nullptr);
		}

	};

