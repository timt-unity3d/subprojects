struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

}

void RegisterAllClasses()
{
	//Total: 50 classes
	//0. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//1. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//4. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//5. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//6. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//7. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//8. Texture2DArray
	void RegisterClass_Texture2DArray();
	RegisterClass_Texture2DArray();

	//9. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//10. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//11. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//12. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//13. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//14. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//15. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//16. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//17. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//18. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//19. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//20. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//21. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//22. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//23. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//24. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//25. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//26. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//27. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//28. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//29. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//30. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//31. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//32. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//33. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//34. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//35. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//36. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//37. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//38. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//39. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//40. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//41. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//42. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//43. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//44. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//45. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//46. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//47. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//48. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

	//49. UnityConnectSettings
	void RegisterClass_UnityConnectSettings();
	RegisterClass_UnityConnectSettings();

}
