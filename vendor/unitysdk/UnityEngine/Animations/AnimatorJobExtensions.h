#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Animations { class TransformStreamHandle; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Animations { class PropertyStreamHandle; }
namespace UnityEngine::Animations { class CustomStreamPropertyType; }
namespace UnityEngine::Animations { class TransformSceneHandle; }
namespace UnityEngine::Animations { class PropertySceneHandle; }
namespace UnityEngine::Animations { class TransformStreamHandle&; }
namespace UnityEngine::Animations { class PropertyStreamHandle&; }
namespace UnityEngine::Animations { class TransformSceneHandle&; }
namespace UnityEngine::Animations { class PropertySceneHandle&; }

#define UNITYENGINE_ANIMATIONS_ANIMATORJOBEXTENSIONS_BINDSTREAMTRANSFORM_OFFSET UNITYSDK_OFFSET(0xA1D6AA0)
#define UNITYENGINE_ANIMATIONS_ANIMATORJOBEXTENSIONS_BINDSTREAMPROPERTY_OFFSET UNITYSDK_OFFSET(0xA1D6B60)
#define UNITYENGINE_ANIMATIONS_ANIMATORJOBEXTENSIONS_BINDCUSTOMSTREAMPROPERTY_OFFSET UNITYSDK_OFFSET(0xA1D6C70)
#define UNITYENGINE_ANIMATIONS_ANIMATORJOBEXTENSIONS_BINDSTREAMPROPERTY_OFFSET UNITYSDK_OFFSET(0xA1D6BE0)
#define UNITYENGINE_ANIMATIONS_ANIMATORJOBEXTENSIONS_BINDSCENETRANSFORM_OFFSET UNITYSDK_OFFSET(0xA1D6D80)
#define UNITYENGINE_ANIMATIONS_ANIMATORJOBEXTENSIONS_BINDSCENEPROPERTY_OFFSET UNITYSDK_OFFSET(0xA1D6E20)
#define UNITYENGINE_ANIMATIONS_ANIMATORJOBEXTENSIONS_BINDSCENEPROPERTY_OFFSET UNITYSDK_OFFSET(0xA1D6E90)
#define UNITYENGINE_ANIMATIONS_ANIMATORJOBEXTENSIONS_INTERNALBINDSTREAMTRANSFORM_OFFSET UNITYSDK_OFFSET(0xA1D6B10)
#define UNITYENGINE_ANIMATIONS_ANIMATORJOBEXTENSIONS_INTERNALBINDSTREAMPROPERTY_OFFSET UNITYSDK_OFFSET(0xA1D6D30)
#define UNITYENGINE_ANIMATIONS_ANIMATORJOBEXTENSIONS_INTERNALBINDCUSTOMSTREAMPROPERTY_OFFSET UNITYSDK_OFFSET(0xA1D6CE0)
#define UNITYENGINE_ANIMATIONS_ANIMATORJOBEXTENSIONS_INTERNALBINDSCENETRANSFORM_OFFSET UNITYSDK_OFFSET(0xA1D6DD0)
#define UNITYENGINE_ANIMATIONS_ANIMATORJOBEXTENSIONS_INTERNALBINDSCENEPROPERTY_OFFSET UNITYSDK_OFFSET(0xA1D6F10)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int AnimatorJobExtensions_TypeDefinitionIndex = 36514;

	class AnimatorJobExtensions : public Il2CppObject
	{
	public:
		::UnityEngine::Animations::TransformStreamHandle* BindStreamTransform(::UnityEngine::Animator* arg, ::UnityEngine::Transform* arg)
		{
			return (return (::UnityEngine::Animations::TransformStreamHandle*(*)(::UnityEngine::Animator*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORJOBEXTENSIONS_BINDSTREAMTRANSFORM_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Animations::PropertyStreamHandle* BindStreamProperty(::UnityEngine::Animator* arg, ::UnityEngine::Transform* arg, ::System::Type* arg, ::System::String* str)
		{
			return (return (::UnityEngine::Animations::PropertyStreamHandle*(*)(::UnityEngine::Animator*, ::UnityEngine::Transform*, ::System::Type*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORJOBEXTENSIONS_BINDSTREAMPROPERTY_OFFSET))(arg, arg, arg, str, nullptr);
		}

		::UnityEngine::Animations::PropertyStreamHandle* BindCustomStreamProperty(::UnityEngine::Animator* arg, ::System::String* str, ::UnityEngine::Animations::CustomStreamPropertyType* arg)
		{
			return (return (::UnityEngine::Animations::PropertyStreamHandle*(*)(::UnityEngine::Animator*, ::System::String*, ::UnityEngine::Animations::CustomStreamPropertyType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORJOBEXTENSIONS_BINDCUSTOMSTREAMPROPERTY_OFFSET))(arg, str, arg, nullptr);
		}

		::UnityEngine::Animations::PropertyStreamHandle* BindStreamProperty(::UnityEngine::Animator* arg, ::UnityEngine::Transform* arg, ::System::Type* arg, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::UnityEngine::Animations::PropertyStreamHandle*(*)(::UnityEngine::Animator*, ::UnityEngine::Transform*, ::System::Type*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORJOBEXTENSIONS_BINDSTREAMPROPERTY_OFFSET))(arg, arg, arg, str, arg, nullptr);
		}

		::UnityEngine::Animations::TransformSceneHandle* BindSceneTransform(::UnityEngine::Animator* arg, ::UnityEngine::Transform* arg)
		{
			return (return (::UnityEngine::Animations::TransformSceneHandle*(*)(::UnityEngine::Animator*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORJOBEXTENSIONS_BINDSCENETRANSFORM_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Animations::PropertySceneHandle* BindSceneProperty(::UnityEngine::Animator* arg, ::UnityEngine::Transform* arg, ::System::Type* arg, ::System::String* str)
		{
			return (return (::UnityEngine::Animations::PropertySceneHandle*(*)(::UnityEngine::Animator*, ::UnityEngine::Transform*, ::System::Type*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORJOBEXTENSIONS_BINDSCENEPROPERTY_OFFSET))(arg, arg, arg, str, nullptr);
		}

		::UnityEngine::Animations::PropertySceneHandle* BindSceneProperty(::UnityEngine::Animator* arg, ::UnityEngine::Transform* arg, ::System::Type* arg, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::UnityEngine::Animations::PropertySceneHandle*(*)(::UnityEngine::Animator*, ::UnityEngine::Transform*, ::System::Type*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORJOBEXTENSIONS_BINDSCENEPROPERTY_OFFSET))(arg, arg, arg, str, arg, nullptr);
		}

		::System::Void InternalBindStreamTransform(::UnityEngine::Animator* arg, ::UnityEngine::Transform* arg, ::UnityEngine::Animations::TransformStreamHandle&* arg)
		{
			((::System::Void(*)(::UnityEngine::Animator*, ::UnityEngine::Transform*, ::UnityEngine::Animations::TransformStreamHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORJOBEXTENSIONS_INTERNALBINDSTREAMTRANSFORM_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void InternalBindStreamProperty(::UnityEngine::Animator* arg, ::UnityEngine::Transform* arg, ::System::Type* arg, ::System::String* str, ::System::Boolean arg, ::UnityEngine::Animations::PropertyStreamHandle&* arg)
		{
			((::System::Void(*)(::UnityEngine::Animator*, ::UnityEngine::Transform*, ::System::Type*, ::System::String*, ::System::Boolean, ::UnityEngine::Animations::PropertyStreamHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORJOBEXTENSIONS_INTERNALBINDSTREAMPROPERTY_OFFSET))(arg, arg, arg, str, arg, arg, nullptr);
		}

		::System::Void InternalBindCustomStreamProperty(::UnityEngine::Animator* arg, ::System::String* str, ::UnityEngine::Animations::CustomStreamPropertyType* arg, ::UnityEngine::Animations::PropertyStreamHandle&* arg)
		{
			((::System::Void(*)(::UnityEngine::Animator*, ::System::String*, ::UnityEngine::Animations::CustomStreamPropertyType*, ::UnityEngine::Animations::PropertyStreamHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORJOBEXTENSIONS_INTERNALBINDCUSTOMSTREAMPROPERTY_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Void InternalBindSceneTransform(::UnityEngine::Animator* arg, ::UnityEngine::Transform* arg, ::UnityEngine::Animations::TransformSceneHandle&* arg)
		{
			((::System::Void(*)(::UnityEngine::Animator*, ::UnityEngine::Transform*, ::UnityEngine::Animations::TransformSceneHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORJOBEXTENSIONS_INTERNALBINDSCENETRANSFORM_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void InternalBindSceneProperty(::UnityEngine::Animator* arg, ::UnityEngine::Transform* arg, ::System::Type* arg, ::System::String* str, ::System::Boolean arg, ::UnityEngine::Animations::PropertySceneHandle&* arg)
		{
			((::System::Void(*)(::UnityEngine::Animator*, ::UnityEngine::Transform*, ::System::Type*, ::System::String*, ::System::Boolean, ::UnityEngine::Animations::PropertySceneHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORJOBEXTENSIONS_INTERNALBINDSCENEPROPERTY_OFFSET))(arg, arg, arg, str, arg, arg, nullptr);
		}

	};
}

