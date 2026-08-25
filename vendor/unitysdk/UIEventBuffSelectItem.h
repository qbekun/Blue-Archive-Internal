#pragma once
#include "unitysdk.h"

namespace MX::Data { class EventContentBuffData; }

#define UIEVENTBUFFSELECTITEM_SETBUFFSELECTITEM_OFFSET UNITYSDK_OFFSET(0x2420370)
#define UIEVENTBUFFSELECTITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x2420940)

	inline static constexpr unsigned int UIEventBuffSelectItem_TypeDefinitionIndex = 5503;

	class UIEventBuffSelectItem : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* buffInfoDatas; // 0x18
		::System::Int32 iconPathIndex; // 0x20
		::System::Int32 nonIconPathIndex; // 0x24

		::System::Void SetBuffSelectItem(::MX::Data::EventContentBuffData* arg, ::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::MX::Data::EventContentBuffData*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBUFFSELECTITEM_SETBUFFSELECTITEM_OFFSET))(arg, str, str2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBUFFSELECTITEM_.CTOR_OFFSET))(nullptr);
		}

	};

