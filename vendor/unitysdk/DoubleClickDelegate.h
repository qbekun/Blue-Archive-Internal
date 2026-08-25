#pragma once
#include "unitysdk.h"

namespace RuntimeInspectorNamespace { class HierarchyData; }

#define DOUBLECLICKDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9560550)
#define DOUBLECLICKDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9560660)
#define DOUBLECLICKDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9560670)
#define DOUBLECLICKDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9560680)

	inline static constexpr unsigned int DoubleClickDelegate_TypeDefinitionIndex = 35623;

	class DoubleClickDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DOUBLECLICKDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + DOUBLECLICKDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void Invoke(::RuntimeInspectorNamespace::HierarchyData* arg)
		{
			((::System::Void(*)(::RuntimeInspectorNamespace::HierarchyData*, ::PVOID))((::PBYTE)hIl2Cpp + DOUBLECLICKDELEGATE_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::RuntimeInspectorNamespace::HierarchyData* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::RuntimeInspectorNamespace::HierarchyData*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + DOUBLECLICKDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

	};

