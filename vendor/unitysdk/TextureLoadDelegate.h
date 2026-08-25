#pragma once
#include "unitysdk.h"

namespace Spine::Unity { class OnDemandTextureLoader; }
namespace UnityEngine { class Material; }

#define TEXTURELOADDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x95EB750)
#define TEXTURELOADDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x95EB860)
#define TEXTURELOADDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x95EB870)
#define TEXTURELOADDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x95EB900)

	inline static constexpr unsigned int TextureLoadDelegate_TypeDefinitionIndex = 35275;

	class TextureLoadDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TEXTURELOADDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + TEXTURELOADDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::Spine::Unity::OnDemandTextureLoader* arg, ::UnityEngine::Material* arg, ::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::Spine::Unity::OnDemandTextureLoader*, ::UnityEngine::Material*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + TEXTURELOADDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Invoke(::Spine::Unity::OnDemandTextureLoader* arg, ::UnityEngine::Material* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Spine::Unity::OnDemandTextureLoader*, ::UnityEngine::Material*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TEXTURELOADDELEGATE_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

	};

