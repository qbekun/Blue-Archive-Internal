#pragma once
#include "unitysdk.h"

namespace MX::Data { class CampaignChapterInfo; }

#define <GETOPENCHAPTERS>D__3_.CTOR_OFFSET UNITYSDK_OFFSET(0xF868F0)
#define <GETOPENCHAPTERS>D__3_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xF86920)
#define <GETOPENCHAPTERS>D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xF86990)
#define <GETOPENCHAPTERS>D__3___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xF86ED0)
#define <GETOPENCHAPTERS>D__3_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.DATA.CAMPAIGNCHAPTERINFO_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF86F20)
#define <GETOPENCHAPTERS>D__3_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xF86F30)
#define <GETOPENCHAPTERS>D__3_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF86F80)
#define <GETOPENCHAPTERS>D__3_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.DATA.CAMPAIGNCHAPTERINFO_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xF86F90)
#define <GETOPENCHAPTERS>D__3_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xF87040)

	inline static constexpr unsigned int <GetOpenChapters>d__3_TypeDefinitionIndex = 12246;

	class <GetOpenChapters>d__3 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::MX::Data::CampaignChapterInfo* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		Il2CppObject* stageClearHistory; // 0x28
		Il2CppObject* __3__stageClearHistory; // 0x30
		Il2CppObject* ChapterIds; // 0x38
		Il2CppObject* __3__ChapterIds; // 0x40
		Il2CppObject* _stageHistorySet_5__2; // 0x48
		Il2CppObject* __7__wrap2; // 0x50

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GETOPENCHAPTERS>D__3_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETOPENCHAPTERS>D__3_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETOPENCHAPTERS>D__3_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETOPENCHAPTERS>D__3___M__FINALLY1_OFFSET))(nullptr);
		}

		::MX::Data::CampaignChapterInfo* System.Collections.Generic.IEnumerator_MX.Data.CampaignChapterInfo_.get_Current()
		{
			return ((::MX::Data::CampaignChapterInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETOPENCHAPTERS>D__3_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.DATA.CAMPAIGNCHAPTERINFO_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETOPENCHAPTERS>D__3_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETOPENCHAPTERS>D__3_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_MX.Data.CampaignChapterInfo_.GetEnumerator()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETOPENCHAPTERS>D__3_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.DATA.CAMPAIGNCHAPTERINFO_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETOPENCHAPTERS>D__3_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

