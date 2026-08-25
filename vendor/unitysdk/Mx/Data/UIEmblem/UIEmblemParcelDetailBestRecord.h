#pragma once
#include "../../../unitysdk.h"

namespace MX::Data { class EmblemInfo; }
namespace UnityEngine { class Texture; }

#define MX_DATA_UIEMBLEM_UIEMBLEMPARCELDETAILBESTRECORD_SETINHERITEDWIDGETS_OFFSET UNITYSDK_OFFSET(0x1982060)
#define MX_DATA_UIEMBLEM_UIEMBLEMPARCELDETAILBESTRECORD_.CTOR_OFFSET UNITYSDK_OFFSET(0x1982250)
#define MX_DATA_UIEMBLEM_UIEMBLEMPARCELDETAILBESTRECORD_ONRECORDICONLOADED_OFFSET UNITYSDK_OFFSET(0x1982260)

namespace MX::Data::UIEmblem
{
	inline static constexpr unsigned int UIEmblemParcelDetailBestRecord_TypeDefinitionIndex = 16524;

	class UIEmblemParcelDetailBestRecord : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* BestRecordIcons; // 0x50

		::System::Void SetInheritedWidgets(::MX::Data::EmblemInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EmblemInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_UIEMBLEM_UIEMBLEMPARCELDETAILBESTRECORD_SETINHERITEDWIDGETS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_UIEMBLEM_UIEMBLEMPARCELDETAILBESTRECORD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnRecordIconLoaded(::UnityEngine::Texture* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_UIEMBLEM_UIEMBLEMPARCELDETAILBESTRECORD_ONRECORDICONLOADED_OFFSET))(arg, arg, nullptr);
		}

	};
}

