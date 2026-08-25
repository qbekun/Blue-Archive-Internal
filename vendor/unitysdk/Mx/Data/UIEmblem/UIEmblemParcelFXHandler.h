#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine { class GameObject; }
namespace Cysharp::Threading::Tasks { class UniTask; }
namespace MX::Data { class EmblemInfo; }

#define MX_DATA_UIEMBLEM_UIEMBLEMPARCELFXHANDLER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1982B30)
#define MX_DATA_UIEMBLEM_UIEMBLEMPARCELFXHANDLER_PAUSE_OFFSET UNITYSDK_OFFSET(0x1982D00)
#define MX_DATA_UIEMBLEM_UIEMBLEMPARCELFXHANDLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1982D80)
#define MX_DATA_UIEMBLEM_UIEMBLEMPARCELFXHANDLER_DISABLE_OFFSET UNITYSDK_OFFSET(0x1982E40)
#define MX_DATA_UIEMBLEM_UIEMBLEMPARCELFXHANDLER_SETWIDGET_OFFSET UNITYSDK_OFFSET(0x1982E90)
#define MX_DATA_UIEMBLEM_UIEMBLEMPARCELFXHANDLER_LOADFXASYNC_OFFSET UNITYSDK_OFFSET(0x1982F90)
#define MX_DATA_UIEMBLEM_UIEMBLEMPARCELFXHANDLER_RESUME_OFFSET UNITYSDK_OFFSET(0x1983130)
#define MX_DATA_UIEMBLEM_UIEMBLEMPARCELFXHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x19831B0)
#define MX_DATA_UIEMBLEM_UIEMBLEMPARCELFXHANDLER_RELEASE_OFFSET UNITYSDK_OFFSET(0x19831C0)
#define MX_DATA_UIEMBLEM_UIEMBLEMPARCELFXHANDLER_LOADFX_OFFSET UNITYSDK_OFFSET(0x19832B0)

namespace MX::Data::UIEmblem
{
	inline static constexpr unsigned int UIEmblemParcelFXHandler_TypeDefinitionIndex = 16528;

	class UIEmblemParcelFXHandler : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* FXRoot; // 0x10
		UIFxGroupRenderQueuePriorityOrder* RenderQueueManager; // 0x18
		::System::Boolean useFX; // 0x20
		::System::String* fxKey; // 0x28
		::UnityEngine::GameObject* fxInstance; // 0x30
		UIScrollView* scrollView; // 0x38
		::System::Boolean usesScrollView; // 0x40
		UIWidget* widget; // 0x48
		::UnityEngine::Transform* transform; // 0x50
		::System::Boolean isLoading; // 0x58
		::System::Threading::CancellationTokenSource* fxLoadCts; // 0x60

		::System::Void OnUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_UIEMBLEM_UIEMBLEMPARCELFXHANDLER_ONUPDATE_OFFSET))(nullptr);
		}

		::System::Void Pause()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_UIEMBLEM_UIEMBLEMPARCELFXHANDLER_PAUSE_OFFSET))(nullptr);
		}

		::System::Void Initialize(UIScrollView* arg, ::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(UIScrollView*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_UIEMBLEM_UIEMBLEMPARCELFXHANDLER_INITIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Disable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_UIEMBLEM_UIEMBLEMPARCELFXHANDLER_DISABLE_OFFSET))(nullptr);
		}

		::System::Void SetWidget(UIWidget* arg)
		{
			((::System::Void(*)(UIWidget*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_UIEMBLEM_UIEMBLEMPARCELFXHANDLER_SETWIDGET_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* LoadFXAsync(::MX::Data::EmblemInfo* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::MX::Data::EmblemInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_UIEMBLEM_UIEMBLEMPARCELFXHANDLER_LOADFXASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void Resume()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_UIEMBLEM_UIEMBLEMPARCELFXHANDLER_RESUME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_UIEMBLEM_UIEMBLEMPARCELFXHANDLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_UIEMBLEM_UIEMBLEMPARCELFXHANDLER_RELEASE_OFFSET))(nullptr);
		}

		::System::Void LoadFX(::MX::Data::EmblemInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EmblemInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_UIEMBLEM_UIEMBLEMPARCELFXHANDLER_LOADFX_OFFSET))(arg, nullptr);
		}

	};
}

