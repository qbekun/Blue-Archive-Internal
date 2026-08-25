#pragma once
#include "unitysdk.h"

namespace Spine { class TrackEntry; }

#define TRACKENTRYDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x95A0900)
#define TRACKENTRYDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x95A0930)
#define TRACKENTRYDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x95A0A40)
#define TRACKENTRYDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x95A0A50)

	inline static constexpr unsigned int TrackEntryDelegate_TypeDefinitionIndex = 34993;

	class TrackEntryDelegate : public Il2CppObject
	{
	public:
		::System::IAsyncResult* BeginInvoke(::Spine::TrackEntry* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::Spine::TrackEntry*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + TRACKENTRYDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TRACKENTRYDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + TRACKENTRYDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void Invoke(::Spine::TrackEntry* arg)
		{
			((::System::Void(*)(::Spine::TrackEntry*, ::PVOID))((::PBYTE)hIl2Cpp + TRACKENTRYDELEGATE_INVOKE_OFFSET))(arg, nullptr);
		}

	};

