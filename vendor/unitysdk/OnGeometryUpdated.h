#pragma once
#include "unitysdk.h"

#define ONGEOMETRYUPDATED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x24371E0)
#define ONGEOMETRYUPDATED_.CTOR_OFFSET UNITYSDK_OFFSET(0x24371F0)
#define ONGEOMETRYUPDATED_INVOKE_OFFSET UNITYSDK_OFFSET(0x24372B0)
#define ONGEOMETRYUPDATED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x24372C0)

	inline static constexpr unsigned int OnGeometryUpdated_TypeDefinitionIndex = 245;

	class OnGeometryUpdated : public Il2CppObject
	{
	public:
		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + ONGEOMETRYUPDATED_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONGEOMETRYUPDATED_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Invoke()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGEOMETRYUPDATED_INVOKE_OFFSET))(nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* arg, ::System::Object* arg2)
		{
			return ((::System::IAsyncResult*(*)(::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ONGEOMETRYUPDATED_BEGININVOKE_OFFSET))(arg, arg2, nullptr);
		}

	};

