#pragma once
#include "unitysdk.h"

#define GAMESCALEWEBHELPERRECEIVEIMAGEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DB99F0)
#define GAMESCALEWEBHELPERRECEIVEIMAGEDATA_INVOKE_OFFSET UNITYSDK_OFFSET(0x9DBC150)
#define GAMESCALEWEBHELPERRECEIVEIMAGEDATA_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9DBC180)
#define GAMESCALEWEBHELPERRECEIVEIMAGEDATA_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9DBC250)

	inline static constexpr unsigned int GameScaleWebHelperReceiveImageData_TypeDefinitionIndex = 26412;

	class GameScaleWebHelperReceiveImageData : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GAMESCALEWEBHELPERRECEIVEIMAGEDATA_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + GAMESCALEWEBHELPERRECEIVEIMAGEDATA_INVOKE_OFFSET))(arg, arg, arg, str, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::String* str, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::String*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GAMESCALEWEBHELPERRECEIVEIMAGEDATA_BEGININVOKE_OFFSET))(arg, arg, arg, str, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + GAMESCALEWEBHELPERRECEIVEIMAGEDATA_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

