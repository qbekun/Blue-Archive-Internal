#pragma once
#include "../../../unitysdk.h"

namespace PlatformSupport::Collections::Specialized { class NotifyCollectionChangedEventArgs; }

#define PLATFORMSUPPORT_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x4D5360)
#define PLATFORMSUPPORT_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x4D5370)
#define PLATFORMSUPPORT_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x4D53B0)
#define PLATFORMSUPPORT_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x4D53C0)

namespace PlatformSupport::Collections::Specialized
{
	inline static constexpr unsigned int NotifyCollectionChangedEventHandler_TypeDefinitionIndex = 21282;

	class NotifyCollectionChangedEventHandler : public Il2CppObject
	{
	public:
		::System::Void Invoke(::System::Object* arg, ::PlatformSupport::Collections::Specialized::NotifyCollectionChangedEventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::PlatformSupport::Collections::Specialized::NotifyCollectionChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSUPPORT_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* arg, ::PlatformSupport::Collections::Specialized::NotifyCollectionChangedEventArgs* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Object*, ::PlatformSupport::Collections::Specialized::NotifyCollectionChangedEventArgs*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSUPPORT_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSUPPORT_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSUPPORT_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

