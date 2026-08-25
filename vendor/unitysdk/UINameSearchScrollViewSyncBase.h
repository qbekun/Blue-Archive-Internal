#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Coroutine; }

#define UINAMESEARCHSCROLLVIEWSYNCBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x26B10D0)
#define UINAMESEARCHSCROLLVIEWSYNCBASE_CO_MOVESCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x26B1140)
#define UINAMESEARCHSCROLLVIEWSYNCBASE_ONSEARCHPANELTOGGLEFINISHED_OFFSET UNITYSDK_OFFSET(0x26B11D0)
#define UINAMESEARCHSCROLLVIEWSYNCBASE_ONSEARCHPANELCLOSING_OFFSET UNITYSDK_OFFSET(0x26B1280)
#define UINAMESEARCHSCROLLVIEWSYNCBASE_ONSEARCHPANELOPENING_OFFSET UNITYSDK_OFFSET(0x26B12B0)
#define UINAMESEARCHSCROLLVIEWSYNCBASE_SYNCSCROLLVIEWPOSITIONS_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int UINameSearchScrollViewSyncBase_TypeDefinitionIndex = 6895;

	class UINameSearchScrollViewSyncBase : public Il2CppObject
	{
	public:
		::UnityEngine::Coroutine* _syncCoroutine; // 0x60
		::System::Boolean _animationRunning; // 0x68

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINAMESEARCHSCROLLVIEWSYNCBASE_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_MoveScrollView()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UINAMESEARCHSCROLLVIEWSYNCBASE_CO_MOVESCROLLVIEW_OFFSET))(nullptr);
		}

		::System::Void OnSearchPanelToggleFinished()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINAMESEARCHSCROLLVIEWSYNCBASE_ONSEARCHPANELTOGGLEFINISHED_OFFSET))(nullptr);
		}

		::System::Void OnSearchPanelClosing()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINAMESEARCHSCROLLVIEWSYNCBASE_ONSEARCHPANELCLOSING_OFFSET))(nullptr);
		}

		::System::Void OnSearchPanelOpening()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINAMESEARCHSCROLLVIEWSYNCBASE_ONSEARCHPANELOPENING_OFFSET))(nullptr);
		}

		::System::Void SyncScrollViewPositions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINAMESEARCHSCROLLVIEWSYNCBASE_SYNCSCROLLVIEWPOSITIONS_OFFSET))(nullptr);
		}

	};

