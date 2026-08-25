#pragma once
#include "unitysdk.h"

namespace Spine { class TrackEntry; }
namespace Spine { class Event; }

#define TRACKENTRYEVENTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x95A0A60)
#define TRACKENTRYEVENTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x95A0AA0)
#define TRACKENTRYEVENTDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x95A0AB0)
#define TRACKENTRYEVENTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x95A0BC0)

	inline static constexpr unsigned int TrackEntryEventDelegate_TypeDefinitionIndex = 34994;

	class TrackEntryEventDelegate : public Il2CppObject
	{
	public:
		::System::IAsyncResult* BeginInvoke(::Spine::TrackEntry* arg, ::Spine::Event* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::Spine::TrackEntry*, ::Spine::Event*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + TRACKENTRYEVENTDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Invoke(::Spine::TrackEntry* arg, ::Spine::Event* arg)
		{
			((::System::Void(*)(::Spine::TrackEntry*, ::Spine::Event*, ::PVOID))((::PBYTE)hIl2Cpp + TRACKENTRYEVENTDELEGATE_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TRACKENTRYEVENTDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + TRACKENTRYEVENTDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

