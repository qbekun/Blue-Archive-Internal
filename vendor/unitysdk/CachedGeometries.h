#pragma once
#include "unitysdk.h"

class UIGeometry;

#define CACHEDGEOMETRIES_WHICHPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0xA474C0)
#define CACHEDGEOMETRIES_PUSHTOCACHEDGEOMETRIES_OFFSET UNITYSDK_OFFSET(0xA475B0)
#define CACHEDGEOMETRIES_PUSHTOCACHEDGEOMETRIES_OFFSET UNITYSDK_OFFSET(0x000000)
#define CACHEDGEOMETRIES_PUSHTOCACHEDGEOMETRIES_OFFSET UNITYSDK_OFFSET(0xA47630)
#define CACHEDGEOMETRIES_PULLFROMCACHEDGEOMETRIES_OFFSET UNITYSDK_OFFSET(0xA47760)
#define CACHEDGEOMETRIES_PULLFROMCACHEDGEOMETRIES_OFFSET UNITYSDK_OFFSET(0x000000)
#define CACHEDGEOMETRIES_PULLFROMCACHEDGEOMETRIES_OFFSET UNITYSDK_OFFSET(0xA477E0)
#define CACHEDGEOMETRIES_PULLFROMCACHEDGEOMETRIES_OFFSET UNITYSDK_OFFSET(0xA47940)
#define CACHEDGEOMETRIES_.CTOR_OFFSET UNITYSDK_OFFSET(0xA47A70)
#define CACHEDGEOMETRIES_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA47A80)

	inline static constexpr unsigned int CachedGeometries_TypeDefinitionIndex = 100;

	class CachedGeometries : public Il2CppObject
	{
	public:
		::System::Int32 SMALL_LIST_COUNT; // 0x0
		::System::Int32 smallListCapacityLimit; // 0x0
		::Il2CppArray<::System::Object*>* cachedListsOfVector2List; // 0x0
		Il2CppObject* cachedBigListsOfVector2List; // 0x8
		::Il2CppArray<::System::Object*>* cachedListsOfVector3List; // 0x10
		Il2CppObject* cachedBigListsOfVector3List; // 0x18
		::Il2CppArray<::System::Object*>* cachedListsOfColorList; // 0x20
		Il2CppObject* cachedBigListsOfColorList; // 0x28

		::System::Int32 WhichPowerOfTwo(::System::UInt32 arg)
		{
			return ((::System::Int32(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + CACHEDGEOMETRIES_WHICHPOWEROFTWO_OFFSET))(arg, nullptr);
		}

		::System::Void PushToCachedGeometries(UIGeometry* arg)
		{
			((::System::Void(*)(UIGeometry*, ::PVOID))((::PBYTE)hIl2Cpp + CACHEDGEOMETRIES_PUSHTOCACHEDGEOMETRIES_OFFSET))(arg, nullptr);
		}

		::System::Void PushToCachedGeometries(::Il2CppArray<::System::Object*>* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CACHEDGEOMETRIES_PUSHTOCACHEDGEOMETRIES_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void PushToCachedGeometries(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CACHEDGEOMETRIES_PUSHTOCACHEDGEOMETRIES_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void PullFromCachedGeometries(::System::Int32 arg, UIGeometry* arg2)
		{
			((::System::Void(*)(::System::Int32, UIGeometry*, ::PVOID))((::PBYTE)hIl2Cpp + CACHEDGEOMETRIES_PULLFROMCACHEDGEOMETRIES_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void PullFromCachedGeometries(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg2, Il2CppObject* arg3, Il2CppObject&* arg4)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, Il2CppObject*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + CACHEDGEOMETRIES_PULLFROMCACHEDGEOMETRIES_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void PullFromCachedGeometries(::System::Int32 arg, Il2CppObject&* arg2, Il2CppObject&* arg3, Il2CppObject&* arg4, Il2CppObject&* arg5)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + CACHEDGEOMETRIES_PULLFROMCACHEDGEOMETRIES_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void PullFromCachedGeometries(::System::Int32 arg, Il2CppObject&* arg2, Il2CppObject&* arg3, Il2CppObject&* arg4, Il2CppObject&* arg5)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + CACHEDGEOMETRIES_PULLFROMCACHEDGEOMETRIES_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CACHEDGEOMETRIES_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CACHEDGEOMETRIES_.CCTOR_OFFSET))(nullptr);
		}

	};

