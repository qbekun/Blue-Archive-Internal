#pragma once
#include "../unitysdk.h"

namespace TMPro { class TMP_UpdateManager; }
namespace Unity::Profiling { class ProfilerMarker; }
namespace TMPro { class TMP_Text; }

#define TMPRO_TMP_UPDATEMANAGER_REGISTERTEXTELEMENTFORLAYOUTREBUILD_OFFSET UNITYSDK_OFFSET(0xA186EE0)
#define TMPRO_TMP_UPDATEMANAGER_UNREGISTERTEXTOBJECTFORUPDATE_OFFSET UNITYSDK_OFFSET(0xA187180)
#define TMPRO_TMP_UPDATEMANAGER_REGISTERTEXTELEMENTFORCULLINGUPDATE_OFFSET UNITYSDK_OFFSET(0xA187290)
#define TMPRO_TMP_UPDATEMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA187430)
#define TMPRO_TMP_UPDATEMANAGER_INTERNALREGISTERTEXTELEMENTFORGRAPHICREBUILD_OFFSET UNITYSDK_OFFSET(0xA187690)
#define TMPRO_TMP_UPDATEMANAGER_INTERNALREGISTERTEXTELEMENTFORCULLINGUPDATE_OFFSET UNITYSDK_OFFSET(0xA187310)
#define TMPRO_TMP_UPDATEMANAGER_REGISTERTEXTELEMENTFORGRAPHICREBUILD_OFFSET UNITYSDK_OFFSET(0xA1877B0)
#define TMPRO_TMP_UPDATEMANAGER_DOREBUILDS_OFFSET UNITYSDK_OFFSET(0xA187830)
#define TMPRO_TMP_UPDATEMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA186F60)
#define TMPRO_TMP_UPDATEMANAGER_UNREGISTERTEXTELEMENTFORREBUILD_OFFSET UNITYSDK_OFFSET(0xA187A90)
#define TMPRO_TMP_UPDATEMANAGER_ONCAMERAPRECULL_OFFSET UNITYSDK_OFFSET(0xA187C50)
#define TMPRO_TMP_UPDATEMANAGER_INTERNALUNREGISTERTEXTELEMENTFORGRAPHICREBUILD_OFFSET UNITYSDK_OFFSET(0xA187B30)
#define TMPRO_TMP_UPDATEMANAGER_INTERNALUNREGISTERTEXTELEMENTFORLAYOUTREBUILD_OFFSET UNITYSDK_OFFSET(0xA187BC0)
#define TMPRO_TMP_UPDATEMANAGER_INTERNALREGISTERTEXTELEMENTFORLAYOUTREBUILD_OFFSET UNITYSDK_OFFSET(0xA187060)
#define TMPRO_TMP_UPDATEMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA187C60)
#define TMPRO_TMP_UPDATEMANAGER_REGISTERTEXTOBJECTFORUPDATE_OFFSET UNITYSDK_OFFSET(0xA187DC0)
#define TMPRO_TMP_UPDATEMANAGER_INTERNALREGISTERTEXTOBJECTFORUPDATE_OFFSET UNITYSDK_OFFSET(0xA187E40)
#define TMPRO_TMP_UPDATEMANAGER_INTERNALUNREGISTERTEXTOBJECTFORUPDATE_OFFSET UNITYSDK_OFFSET(0xA187200)

namespace TMPro
{
	inline static constexpr unsigned int TMP_UpdateManager_TypeDefinitionIndex = 33760;

	class TMP_UpdateManager : public Il2CppObject
	{
	public:
		::TMPro::TMP_UpdateManager* s_Instance; // 0x0
		Il2CppObject* m_LayoutQueueLookup; // 0x10
		Il2CppObject* m_LayoutRebuildQueue; // 0x18
		Il2CppObject* m_GraphicQueueLookup; // 0x20
		Il2CppObject* m_GraphicRebuildQueue; // 0x28
		Il2CppObject* m_InternalUpdateLookup; // 0x30
		Il2CppObject* m_InternalUpdateQueue; // 0x38
		Il2CppObject* m_CullingUpdateLookup; // 0x40
		Il2CppObject* m_CullingUpdateQueue; // 0x48
		::Unity::Profiling::ProfilerMarker* k_RegisterTextObjectForUpdateMarker; // 0x8
		::Unity::Profiling::ProfilerMarker* k_RegisterTextElementForGraphicRebuildMarker; // 0x10
		::Unity::Profiling::ProfilerMarker* k_RegisterTextElementForCullingUpdateMarker; // 0x18
		::Unity::Profiling::ProfilerMarker* k_UnregisterTextObjectForUpdateMarker; // 0x20
		::Unity::Profiling::ProfilerMarker* k_UnregisterTextElementForGraphicRebuildMarker; // 0x28

		::System::Void RegisterTextElementForLayoutRebuild(::TMPro::TMP_Text* arg)
		{
			((::System::Void(*)(::TMPro::TMP_Text*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEMANAGER_REGISTERTEXTELEMENTFORLAYOUTREBUILD_OFFSET))(arg, nullptr);
		}

		::System::Void UnRegisterTextObjectForUpdate(::TMPro::TMP_Text* arg)
		{
			((::System::Void(*)(::TMPro::TMP_Text*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEMANAGER_UNREGISTERTEXTOBJECTFORUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterTextElementForCullingUpdate(::TMPro::TMP_Text* arg)
		{
			((::System::Void(*)(::TMPro::TMP_Text*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEMANAGER_REGISTERTEXTELEMENTFORCULLINGUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void InternalRegisterTextElementForGraphicRebuild(::TMPro::TMP_Text* arg)
		{
			((::System::Void(*)(::TMPro::TMP_Text*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEMANAGER_INTERNALREGISTERTEXTELEMENTFORGRAPHICREBUILD_OFFSET))(arg, nullptr);
		}

		::System::Void InternalRegisterTextElementForCullingUpdate(::TMPro::TMP_Text* arg)
		{
			((::System::Void(*)(::TMPro::TMP_Text*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEMANAGER_INTERNALREGISTERTEXTELEMENTFORCULLINGUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterTextElementForGraphicRebuild(::TMPro::TMP_Text* arg)
		{
			((::System::Void(*)(::TMPro::TMP_Text*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEMANAGER_REGISTERTEXTELEMENTFORGRAPHICREBUILD_OFFSET))(arg, nullptr);
		}

		::System::Void DoRebuilds()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEMANAGER_DOREBUILDS_OFFSET))(nullptr);
		}

		::TMPro::TMP_UpdateManager* get_instance()
		{
			return (return (::TMPro::TMP_UpdateManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEMANAGER_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void UnRegisterTextElementForRebuild(::TMPro::TMP_Text* arg)
		{
			((::System::Void(*)(::TMPro::TMP_Text*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEMANAGER_UNREGISTERTEXTELEMENTFORREBUILD_OFFSET))(arg, nullptr);
		}

		::System::Void OnCameraPreCull()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEMANAGER_ONCAMERAPRECULL_OFFSET))(nullptr);
		}

		::System::Void InternalUnRegisterTextElementForGraphicRebuild(::TMPro::TMP_Text* arg)
		{
			((::System::Void(*)(::TMPro::TMP_Text*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEMANAGER_INTERNALUNREGISTERTEXTELEMENTFORGRAPHICREBUILD_OFFSET))(arg, nullptr);
		}

		::System::Void InternalUnRegisterTextElementForLayoutRebuild(::TMPro::TMP_Text* arg)
		{
			((::System::Void(*)(::TMPro::TMP_Text*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEMANAGER_INTERNALUNREGISTERTEXTELEMENTFORLAYOUTREBUILD_OFFSET))(arg, nullptr);
		}

		::System::Void InternalRegisterTextElementForLayoutRebuild(::TMPro::TMP_Text* arg)
		{
			((::System::Void(*)(::TMPro::TMP_Text*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEMANAGER_INTERNALREGISTERTEXTELEMENTFORLAYOUTREBUILD_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEMANAGER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterTextObjectForUpdate(::TMPro::TMP_Text* arg)
		{
			((::System::Void(*)(::TMPro::TMP_Text*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEMANAGER_REGISTERTEXTOBJECTFORUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void InternalRegisterTextObjectForUpdate(::TMPro::TMP_Text* arg)
		{
			((::System::Void(*)(::TMPro::TMP_Text*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEMANAGER_INTERNALREGISTERTEXTOBJECTFORUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void InternalUnRegisterTextObjectForUpdate(::TMPro::TMP_Text* arg)
		{
			((::System::Void(*)(::TMPro::TMP_Text*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEMANAGER_INTERNALUNREGISTERTEXTOBJECTFORUPDATE_OFFSET))(arg, nullptr);
		}

	};
}

