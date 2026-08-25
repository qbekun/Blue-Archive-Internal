#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_COLLECTIONCHANGEEVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B24F50)
#define SYSTEM_COMPONENTMODEL_COLLECTIONCHANGEEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x9B25060)
#define SYSTEM_COMPONENTMODEL_COLLECTIONCHANGEEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9B25070)
#define SYSTEM_COMPONENTMODEL_COLLECTIONCHANGEEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9B250B0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int CollectionChangeEventHandler_TypeDefinitionIndex = 29361;

	class CollectionChangeEventHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COLLECTIONCHANGEEVENTHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object* arg, ::System::ComponentModel::CollectionChangeEventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::ComponentModel::CollectionChangeEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COLLECTIONCHANGEEVENTHANDLER_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* arg, ::System::ComponentModel::CollectionChangeEventArgs* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Object*, ::System::ComponentModel::CollectionChangeEventArgs*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COLLECTIONCHANGEEVENTHANDLER_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COLLECTIONCHANGEEVENTHANDLER_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};
}

