#pragma once
#include "unitysdk.h"

#define EVENTCONTENTCOLLECTIONOBJECT_CHECKCOLLECTIONFOMISSION_OFFSET UNITYSDK_OFFSET(0x1D0E170)
#define EVENTCONTENTCOLLECTIONOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0x1D0E560)
#define EVENTCONTENTCOLLECTIONOBJECT_CLEARADDEDCOLLECTIONLIST_OFFSET UNITYSDK_OFFSET(0x1D0F1C0)
#define EVENTCONTENTCOLLECTIONOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D0F270)
#define EVENTCONTENTCOLLECTIONOBJECT_CO_REQUESTEVENTCONTENTCOLLECTIONLIST_OFFSET UNITYSDK_OFFSET(0x1D0F370)
#define EVENTCONTENTCOLLECTIONOBJECT_GETADDEDCOLLECTIONLIST_OFFSET UNITYSDK_OFFSET(0x1D0F420)
#define EVENTCONTENTCOLLECTIONOBJECT_GETCOLLECTIONREDDOT_OFFSET UNITYSDK_OFFSET(0x1D0F4A0)
#define EVENTCONTENTCOLLECTIONOBJECT_GETCOLLECTIONLIST_OFFSET UNITYSDK_OFFSET(0x1D0F730)
#define EVENTCONTENTCOLLECTIONOBJECT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D0F7B0)

	inline static constexpr unsigned int EventContentCollectionObject_TypeDefinitionIndex = 1605;

	class EventContentCollectionObject : public Il2CppObject
	{
	public:
		Il2CppObject* collectionListDict; // 0x10
		Il2CppObject* addedCollectionListDict; // 0x18
		Il2CppObject* lazyCheckCollectionForMissionDict; // 0x20

		::System::Void CheckCollectionFoMission(::System::Int64 arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCOLLECTIONOBJECT_CHECKCOLLECTIONFOMISSION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Sync(Il2CppObject* arg, ::System::Boolean arg2, ::System::Boolean arg3, ::System::Action* arg4)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCOLLECTIONOBJECT_SYNC_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void ClearAddedCollectionList(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCOLLECTIONOBJECT_CLEARADDEDCOLLECTIONLIST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCOLLECTIONOBJECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_RequestEventContentCollectionList(::System::Int64 arg, Il2CppObject* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCOLLECTIONOBJECT_CO_REQUESTEVENTCONTENTCOLLECTIONLIST_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetAddedCollectionList(::System::Int64 arg)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCOLLECTIONOBJECT_GETADDEDCOLLECTIONLIST_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetCollectionReddot(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCOLLECTIONOBJECT_GETCOLLECTIONREDDOT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetCollectionList(::System::Int64 arg)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCOLLECTIONOBJECT_GETCOLLECTIONLIST_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCOLLECTIONOBJECT_INITIALIZE_OFFSET))(nullptr);
		}

	};

