import requests
import random
import string

# Configuration
API_KEY = '18cb90c02e614a0e9688a6be6f32f698'
ENDPOINT = 'https://api.bing.microsoft.com/v7.0/search'

def generate_random_search_term(length=10):
    """
    Generate a random search term of a specified length.
    
    Args:
        length (int): The length of the search term. Defaults to 10.
    
    Returns:
        str: A random search term.
    """
    letters = string.ascii_lowercase
    return ''.join(random.choice(letters) for _ in range(length))

def search_bing(query, api_key=API_KEY):
    """
    Search Bing using the provided query and API key.
    
    Args:
        query (str): The search query.
        api_key (str): The Bing Search API key. Defaults to the configured API key.
    
    Returns:
        dict: The search result.
    """
    headers = {'Ocp-Apim-Subscription-Key': api_key}
    params = {'q': query}
    response = requests.get(ENDPOINT, headers=headers, params=params)
    response.raise_for_status()
    return response.json()

def main():
    """
    Perform a random search and print the result.
    """
    num_searches = 1
    for _ in range(num_searches):
        query = generate_random_search_term()
        result = search_bing(query)
        print(f"Search query: {query}")
        print(f"Result: {result}")

if __name__ == "__main__":
    main()