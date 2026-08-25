#pragma once
#include "unitysdk.h"

#define TREEPAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define TREEPAGE_ALLOCSLOT_OFFSET UNITYSDK_OFFSET(0x000000)
#define TREEPAGE_GET_INUSECOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define TREEPAGE_SET_INUSECOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define TREEPAGE_GET_PAGEID_OFFSET UNITYSDK_OFFSET(0x000000)
#define TREEPAGE_SET_PAGEID_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int TreePage_TypeDefinitionIndex = 32284;

	class TreePage : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _slots; // 0x0
		::Il2CppArray<::System::Object*>* _slotMap; // 0x0
		::System::Int32 _inUseCount; // 0x0
		::System::Int32 _pageId; // 0x0
		::System::Int32 _nextFreeSlotLine; // 0x0

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TREEPAGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 AllocSlot(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TREEPAGE_ALLOCSLOT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_InUseCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TREEPAGE_GET_INUSECOUNT_OFFSET))(nullptr);
		}

		::System::Void set_InUseCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TREEPAGE_SET_INUSECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PageId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TREEPAGE_GET_PAGEID_OFFSET))(nullptr);
		}

		::System::Void set_PageId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TREEPAGE_SET_PAGEID_OFFSET))(arg, nullptr);
		}

	};

