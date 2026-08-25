#pragma once
#include "unitysdk.h"

class Movement;
class UIScrollView;

#define SCROLLVIEWELEMENT`1_GET_CONTROLLER_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWELEMENT`1_GET_MYINDEX_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWELEMENT`1_SET_MYINDEX_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWELEMENT`1_SETDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWELEMENT`1_AWAKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWELEMENT`1_REFRESH_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWELEMENT`1_REFRESH_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWELEMENT`1_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWELEMENT`1_SETDRAGSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWELEMENT`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int ScrollViewElement`1_TypeDefinitionIndex = 3373;

	class ScrollViewElement`1 : public Il2CppObject
	{
	public:
		Il2CppObject* _controller; // 0x0
		::System::Int32 _myIndex_k__BackingField; // 0x0

		Il2CppObject* get_controller()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWELEMENT`1_GET_CONTROLLER_OFFSET))(nullptr);
		}

		::System::Int32 get_myIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWELEMENT`1_GET_MYINDEX_OFFSET))(nullptr);
		}

		::System::Void set_myIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWELEMENT`1_SET_MYINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWELEMENT`1_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWELEMENT`1_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Refresh(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWELEMENT`1_REFRESH_OFFSET))(arg, nullptr);
		}

		::System::Void Refresh(::System::Int32 arg, Movement* arg2)
		{
			((::System::Void(*)(::System::Int32, Movement*, ::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWELEMENT`1_REFRESH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetPosition(::System::Int32 arg, Movement* arg2)
		{
			((::System::Void(*)(::System::Int32, Movement*, ::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWELEMENT`1_SETPOSITION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetDragScrollView(UIScrollView* arg)
		{
			((::System::Void(*)(UIScrollView*, ::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWELEMENT`1_SETDRAGSCROLLVIEW_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWELEMENT`1_.CTOR_OFFSET))(nullptr);
		}

	};

